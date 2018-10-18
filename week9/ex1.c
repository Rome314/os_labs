
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int hits = 0;
    int misses = 0;
    
    FILE *input;
    input = fopen("ex1.txt","r");
    scanf("%d",&size);
    
    int mask[size];// = calloc(size, sizeof(int));
    int pages[size];// = calloc(size, sizeof(int));

    for(int i = 0; i < size; i++){
        mask[i] = 0;
        pages[i] = 0;
    }
    
    int availabe_place;
    int is_hit;
    
    int current;
    fscanf(input, "%d", &current);
    
    while(!feof(input)){
        is_hit = 0; 
        availabe_place = 0;
        
        int place_index = 0;
        int min = 256;
        int min_index, hit_index;
        
        
        for(int i = 0; i < size; i++){
            if(pages[i] == current){
                is_hit = 1;
                hit_index = i;
            }
            if (pages[i] == 0){
                availabe_place = 1;
                place_index = i;
            }
            if(min > mask[i]){
                min = mask[i];
                min_index = i;
            }
        }
        
        if(!is_hit){
            if(!availabe_place){
                pages[place_index] = current;
                misses++;
                
                for(int j = 0; j < size; j++){
                    mask[j] = mask[j] >> 1;
                }
                mask[min_index] = 0x80;
            }
            else{
                pages[place_index] = current;
                misses++;
                
                for(int j = 0; j < size; j++){
                    mask[j] = mask[j] >> 1;
                }
                mask[min_index] = 0x80;
            }
        }
        else{
            hits++;
            for(int j = 0; j < size; j++){
                mask[j];
            }
            mask[hit_index] = mask[hit_index] | 0x80;
             
        }
        
        fscanf(input, "%d", &current);
    }    
    
    printf("Hits count is: %d\nMisses count is: %d\n", hits,misses);
    return 0;
}

