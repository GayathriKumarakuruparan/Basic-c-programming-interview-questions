#include <stdio.h>
#include <stdlib.h>
void largest_and_smallest(int *arr,int *size, int *largest, int *smallest)
{
    for(int i=0;i<*size;i++)
    {
       if(*largest<arr[i])
       {
           *largest=arr[i];
       }
    }
    for(int i=0;i<*size;i++)
    {
       if(*smallest>arr[i])
       {
           *smallest=arr[i];
       }
    }
}
int main()
{
    int size,largest,smallest;
    printf("Enter the size\n");
    scanf("%d",&size);
    int *arr=calloc(size,sizeof(int));
    printf("enter the array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest = smallest = arr[0];
    largest_and_smallest(arr,&size,&largest,&smallest);
    printf("the largest number in this array : %d and the smallest number is %d",largest,smallest);
    free(arr);
}
