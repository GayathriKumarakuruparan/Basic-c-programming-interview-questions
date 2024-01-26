#include <stdio.h>
#include <stdlib.h>
void odd_array(int *arr,int *n)
{
    int i;
    for(i=0;i<*n;i++)
    {
        if((arr[i]%2) != 0)
        printf("%d ",arr[i]);
    }
}
int main()
{
    int size,i;
    printf("Enter the size");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    printf("Enter the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Odd array:\n");
    odd_array(arr,&size);
}
