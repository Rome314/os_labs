#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(){
    int descriptors[2];
    char base_str[] = "Hello, World!\n";
    char output[sizeof(base_str)/sizeof(base_str[0])];
    int err_pipe;
    int err_fork;
    
    
    err_pipe = pipe(descriptors);
    
    if (err_pipe < 0){
        printf("Error!\n");
        return 0;
    }
    else{
        err_fork = fork();
        if (err_fork == -1){
            printf("Fork Error!\n");
            exit(0);
        }
        else if(err_fork != 0){
            //printf("%d",getpid());
            close(descriptors[0]);
            write(descriptors[1], base_str, sizeof(base_str));
            exit(0);
        }
        else{
            close(descriptors[1]);
            read(descriptors[0], output, sizeof(output));
            printf("Successful!\n");
            printf("Output string is: %s\n", output);
        }
        return 0;
        
    }
    
}
