#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

sem_t chopstick[5];

void *eat(void *arg){
  int i = (int)arg;
  int n_eat=3;
//How many times is each philosopher allowed to eat.
//To avoid going into infinite loop.
  while(n_eat){
    sem_wait(&chopstick[i]);//lock left chopstick of i
    sem_wait(&chopstick[(i+1)%5]);//lock right chopstick if i
    printf("Philosopher %d is eating \n", i);
     n_eat--;
    //philosopher i has eaten
    sem_post(&chopstick[i]);//release left chopstick of i
    sem_post(&chopstick[(i+1)%5]);//release right chopstick of i
    printf("Philosopher %d is thinking \n", i);
  }
  return 0;
}

int main(void){
  pthread_t philosopher[5];
  int i;
  for(i=0; i<5; i++){
      sem_init(&chopstick[i],0,1);//initializing semaphore
      //sem_init(address of semaphore, indicates if chopstick is
      //shared| 0=shared, initial value to be assigned to semaphore)
  }
  for(i=0; i<5; i++){
      pthread_create(&philosopher[i], NULL, eat,(void*)i);
       //creating a thread for each philosopher
      //pthread_create(pointer to thread_id,if NULL uses default attr,fn to be executed for thread, args of the fn)
  }
 for(i=0; i<5; i++){
      pthread_join(philosopher[i], NULL);//suspends execution of the calling thread until the target thread terminates
  }
  return 0;
}
