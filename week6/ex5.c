#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    
    int child;
    child = fork();
    
    if (child == -1){
        printf("Error!\n");
        exit(0);
    }
    else if(child != 0){
        sleep(10);
        kill(child, SIGTERM);
        printf("I killed my child! [%d]\n",getpid() );
        
    }
    else{
        while(1){
         printf("I'm Alive!\n");
         sleep(1);
        }
       
    }
    
    
    return 0;
}
