#include<algorithm>
#include<string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <deque>
#include <random>
#include <chrono>
using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int GRID_SIZE = 20;
const int GRID_WIDTH = SCREEN_WIDTH / GRID_SIZE;
const int GRID_HEIGHT = SCREEN_HEIGHT / GRID_SIZE;
const int FRAME_RATE = 60;

struct Position {
    int x, y;
    bool operator==(const Position& other) const {
        return x == other.x && y == other.y;
    }
};

class SnakeGame {
public:
    SnakeGame() : running(true), direction({1, 0}), score(0), speed(10) {
        SDL_Init(SDL_INIT_VIDEO);
        TTF_Init();
        window = SDL_CreateWindow("Snake Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
                                 SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//        font = TTF_OpenFont("arial.ttf", 24);
font = TTF_OpenFont("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf", 24);
        // Initial snake position
        snake.push_back({GRID_WIDTH / 2, GRID_HEIGHT / 2});
        spawnFood();
    }

    ~SnakeGame() {
        TTF_CloseFont(font);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        TTF_Quit();
        SDL_Quit();
    }

    void run() {
        auto lastTime = std::chrono::high_resolution_clock::now();
        float accumulator = 0.0f;
        const float frameTime = 1.0f / FRAME_RATE;

        while (running) {
            auto currentTime = std::chrono::high_resolution_clock::now();
            float deltaTime = std::chrono::duration<float>(currentTime - lastTime).count();
            lastTime = currentTime;
            accumulator += deltaTime;

            handleEvents();

            while (accumulator >= 1.0f / speed) {
                update();
                accumulator -= 1.0f / speed;
            }

            render();
            SDL_Delay(1);
        }
    }

private:
    void handleEvents() {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
            else if (event.type == SDL_KEYDOWN) {
                switch (event.key.keysym.sym) {
                    case SDLK_UP:
                        if (direction.y != 1) direction = {0, -1};
                        break;
                    case SDLK_DOWN:
                        if (direction.y != -1) direction = {0, 1};
                        break;
                    case SDLK_LEFT:
                        if (direction.x != 1) direction = {-1, 0};
                        break;
                    case SDLK_RIGHT:
                        if (direction.x != -1) direction = {1, 0};
                        break;
                }
            }
        }
    }

    void update() {
        Position newHead = {snake.front().x + direction.x, snake.front().y + direction.y};

        // Wall collision
        if (newHead.x < 0 || newHead.x >= GRID_WIDTH || newHead.y < 0 || newHead.y >= GRID_HEIGHT) {
            gameOver();
            return;
        }

        // Self collision
        for (const auto& segment : snake) {
            if (segment == newHead) {
                gameOver();
                return;
            }
        }

        snake.push_front(newHead);

        // Food collision
        if (newHead == food) {
            score++;
            speed += 0.5f; // Increase speed slightly
            spawnFood();
        } else {
            snake.pop_back();
        }
    }

    void render() {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // Draw food
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_Rect foodRect = {food.x * GRID_SIZE, food.y * GRID_SIZE, GRID_SIZE, GRID_SIZE};
        SDL_RenderFillRect(renderer, &foodRect);

        // Draw snake
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        for (const auto& segment : snake) {
            SDL_Rect segmentRect = {segment.x * GRID_SIZE, segment.y * GRID_SIZE, GRID_SIZE, GRID_SIZE};
            SDL_RenderFillRect(renderer, &segmentRect);
        }

        // Draw score
        SDL_Color white = {255, 255, 255, 255};
        std::string scoreText = "Score: " + std::to_string(score);
        SDL_Surface* surface = TTF_RenderText_Solid(font, scoreText.c_str(), white);
        SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_Rect scoreRect = {10, 10, surface->w, surface->h};
        SDL_RenderCopy(renderer, texture, nullptr, &scoreRect);
        SDL_FreeSurface(surface);
        SDL_DestroyTexture(texture);

        SDL_RenderPresent(renderer);
    }

    void spawnFood() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distX(0, GRID_WIDTH - 1);
        std::uniform_int_distribution<> distY(0, GRID_HEIGHT - 1);

        do {
            food = {distX(gen), distY(gen)};
        } while (std::find(snake.begin(), snake.end(), food) != snake.end());
    }

    void gameOver() {
        SDL_Color red = {255, 0, 0, 255};
        std::string gameOverText = "Game Over! Final Score: " + std::to_string(score);
        SDL_Surface* surface = TTF_RenderText_Solid(font, gameOverText.c_str(), red);
        SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_Rect gameOverRect = {
            (SCREEN_WIDTH - surface->w) / 2,
            (SCREEN_HEIGHT - surface->h) / 2,
            surface->w,
            surface->h
        };
        
        SDL_RenderCopy(renderer, texture, nullptr, &gameOverRect);
        SDL_RenderPresent(renderer);
        SDL_Delay(3000);
        running = false;
    }

    SDL_Window* window;
    SDL_Renderer* renderer;
    TTF_Font* font;
    std::deque<Position> snake;
    Position direction;
    Position food;
    bool running;
    int score;
    float speed;
};

int main(int argc, char* argv[]) {
    SnakeGame game;
    game.run();
    return 0;
}
