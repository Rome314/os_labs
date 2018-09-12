#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define MAX_CMD 100
#define TRUE 1
int main(){
    
    char input[MAX_CMD];
   // char usr[50];

    while(TRUE){
        
        printf("root$ ");
        system(fgets(input,MAX_CMD - 1,stdin));

    }
    return 0;
}
