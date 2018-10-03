#include <stdio.h>

int main()
{
   int n;

   printf("Please enter the N:\n");
   scanf("%d",&n);
   printf("\n");

   int * array = malloc(sizeof(int));
   
   for (int i = 0; i <= n; i++){
       array[i] = i;
       printf("%d\n", array[i]);
       
       if(i+1 < n){
           array = realloc(array, (i+1)*sizeof(int));
       }
   }

   free(array);
   return 0;
}
