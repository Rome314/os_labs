#include <stdio.h>
 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void bubbleSort(int arr[],int n)
{
   int i, j;
   
   for (i = 0; i < n-1; i++)      

       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int arr[n];
    
    int i;
    for(i=0;i<n;i++)
        arr[i] = rand()%10;
  
    
    printf("Unsorted array: \n");
    int k;
    for (k=0; k < n; k++)
        printf("%d ", arr[k]);
    printf("\n");
    
    
    bubbleSort(arr,n);
    
    printf("Sorted array: \n");
    int j;
    for (j=0; j < n; j++)
        printf("%d ", arr[j]);
    printf("\n");
    return 0;
}

