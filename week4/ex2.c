#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
    
    int i;
    
    for(i = 0; i < 3; i++ ){
        fork();
    }
    
    printf("Sleeping \n");
    sleep(5);
    printf("Not Sleeping \n");
    return 0;
}
