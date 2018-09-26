#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
void feedback(int sign){
    
    if(sign == SIGINT){
        printf("\n\nCatched!\n\n");
        exit(0);
    }
}
int main(){
    
    while(1){
        signal(SIGINT,feedback);
    }
    
    
    
    return 0;
}
