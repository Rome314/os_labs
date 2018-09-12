#include <stdio.h>
#include <sys/types.h>
#define n 5

int main(){
    
    int PID;
    
    PID = fork();
    
    int id = getpid() - n;
    
    if(PID != 0){
        printf("Hello from parent %d \n", id );
    }
    else{
        printf ("Hello from child %d \n", id );
    }
    
    
    return 0;
}
