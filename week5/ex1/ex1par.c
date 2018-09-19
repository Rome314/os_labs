#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define SLEEP_TIME 0.5
void *Hello(int number){
    printf("Hello, I'm thread #%d\nI created in interation #%d\n\n",(int)pthread_self(),number);
    sleep(SLEEP_TIME);
    pthread_exit(NULL);
}
#define COUNT 5

int ids[COUNT];
int main() {
    int i;
    int err_code;
    for (i = 0; i < COUNT; i++){
        err_code = pthread_create(&ids[i], NULL, Hello, i);
        if(err_code){
            printf("Error:%d",err_code);
        }
        printf("\nI'm thread:%d\nCreated new thread: %d\nNumber of iteration:%d\n", (int)pthread_self(), (int)ids[i], i);

        
    }
    pthread_exit(NULL);
    
    
    
    return 0;
}
