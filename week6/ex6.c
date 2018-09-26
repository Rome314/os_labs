#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


int main(){

    int descriptors[2];
    int wr_PID,re_PID;
    int child1, child2;
    int status;
    
    
    child1 = fork();
    printf("First fork is executed!\n");
    if (child1 != 0){
        child2 = fork();
        pipe(descriptors);
        
        printf("Second fork is executed!\n");
        if(child2 != 0){
            printf("Second child is working...\n");
            wr_PID = getpid();
            write(descriptors[1],wr_PID,sizeof(wr_PID));
            printf("Second child's PID moved to buffer!\n");
            waitpid(child2,&status,0);
        }
        else{
            
        }
        
    }
    else{
        printf("First child is working...\n");
        read(descriptors[0],&re_PID,sizeof(re_PID));
        printf("Second child's PID recieved: [%d]\n",re_PID);
        
        
        
        
        
    }
    
    
    return 0;
}
    
    

