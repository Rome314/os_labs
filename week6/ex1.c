#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(){
    int descriptors[2];
    char base_str[] = "Hello, World!\n";
    char output[sizeof(base_str)/sizeof(base_str[0])];
    int err;
    err = pipe(descriptors);
    
    if (err < 0){
        printf("Error!\n");
        return 0;
    }
    else{
        write(descriptors[1], base_str, sizeof(base_str));
        read(descriptors[0], output, sizeof(output));
        printf("Successful!\n");
        printf("Output string is: %s\n", output);
        return 0;
        
    }
    
}
