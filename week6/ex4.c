#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
void feedback(int sign){
    
    if(sign == SIGSTOP){
        
        printf("\nSIGSTOP Catched!\n");
       // break;
    }
    else if(sign == SIGKILL){
        
        printf("\nSIGKILL Catched!\n");
       // break;
        
    }
    else if(sign == SIGUSR1){
        printf("\nSIGUSR1 Catched!\n");
       // break;
    }
}
int main(){
    
    while(1){
        signal(SIGSTOP,feedback);
        signal(SIGKILL,feedback);
        signal(SIGUSR1,feedback);
    }
    
    
    
    return 0;
}
