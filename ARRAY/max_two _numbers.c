#include <stdio.h>
#include <stdlib.h>
void second_largest_number(int *arr,int *size, int *first, int *second)
{
    int i;
    for(i=0;i<*size;i++)
    {
        if(*first<arr[i])
        {
            *second=*first;
            *first=arr[i];
        }
        if(arr[i]<*first && *second<arr[i])
        {
            *second=arr[i];
        }
    }
}
int main()
{
    int size,first,second;
    printf("Enter the size\n");
    scanf("%d",&size);
    int *arr=calloc(size,sizeof(int));
    printf("enter the array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    first = arr[0];
    second= arr[1];
    second_largest_number(arr,&size,&first,&second);
    printf("The top two max numbers are %d and %d",first,second);
    free(arr);
}
