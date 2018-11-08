#include <string.h>
#include <stdio.h>

int main()
{

    FILE* file = fopen("/dev/urandom", "r");
    for (int i = 0; i < 20; i++){
        char curr;
        fscanf(file,"%c",&curr);
        printf("%c", curr);
    }
    printf("\n");
    fclose(file);
    return 0;

}
