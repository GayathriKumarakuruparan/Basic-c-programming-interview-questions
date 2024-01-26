#include <stdio.h>
#include <stdlib.h>
void sum_of_array(int *arr,int *n, int *sum)
{
    int i;
    for(i=0;i<*n;i++)
    {
        *sum+=arr[i];
    }
}
int main()
{
    int size,sum=0,i;
    printf("Enter the size");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    printf("Enter the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("After removed:\n");
    sum_of_array(arr,&size,&sum);
    printf("The sum of the array is %d",sum);
}
