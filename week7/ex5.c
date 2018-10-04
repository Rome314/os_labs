#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
void *my_realloc(void *ptr, int new_size){
    
    char *new_ptr;
    
    if(ptr == NULL){
        return malloc(new_size);
    }
    else if(new_size == 0){
        free(ptr);
        return NULL;
    }
    
    new_ptr = malloc(new_size);
    memcpy(new_ptr, ptr, new_size);
    free(ptr);
    return new_ptr;
}


int main(){
    
    char *tmp = malloc(1*sizeof(char *));
    printf("Old size is: %d\n",malloc_usable_size(tmp));
    tmp[0] = ',';
    tmp[1] = '\0';
    
    printf("Initial data: %s\n", tmp);
    
    tmp = my_realloc(tmp, 10000*sizeof(char));
    tmp[8] = "\0";
    printf("New size is: %d\n",malloc_usable_size(tmp));
    printf("New data: %s\n", tmp);
    
	return 0;
}
