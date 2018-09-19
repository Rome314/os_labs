#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE 50

int buff_idx = 0;
int buffer[BUFF_SIZE];

void * producer(void *args){
    for (int i = 0; i < BUFF_SIZE; i++){
        while(buff_idx == BUFF_SIZE){
            sleep(0.5);
        }
        printf("\nProducer created element: %d", buff_idx);
        buffer[buff_idx++] = 1;
        
    }
}

void * consumer(void *args){
    
    for(int i =0; i < BUFF_SIZE; i++){
        if(buff_idx == BUFF_SIZE){
            buff_idx--;
        }
        while(!buff_idx){
            sleep(0.5);
        }
        printf("\nConsumer took element: %d",buff_idx);
        buffer[buff_idx--] = 0;
    }
}

int main(){
    pthread_t cons,prod;
   
    pthread_create(&cons, NULL, consumer, NULL);
	pthread_create(&prod, NULL, producer, NULL);

	pthread_join(&cons, NULL);
	pthread_join(&prod, NULL);
	
	return 0;
    
    
    
}
