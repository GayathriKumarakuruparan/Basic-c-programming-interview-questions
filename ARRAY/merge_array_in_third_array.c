#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size1,size2,i,j=0;
    printf("Enter the size1:\n");
    scanf("%d",&size1);
     printf("Enter the size2:\n");
    scanf("%d",&size2);
    int *arr=malloc(size1*sizeof(int));
    printf("Enter the array:\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *arr2=malloc(size2*sizeof(int));
    printf("Enter the array:\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int total_size=size1+size2;
    int *arr3=malloc(total_size*sizeof(int));
    for(i=0;i<size1;i++)
    {
       
        arr3[i]=arr[i];
    }
    for(i=size1;i<total_size;i++)
    {
       
        arr3[i]=arr2[j++];
    }
    printf("After merge:\n");
    for(i=0;i<total_size;i++)
    {
        printf("%d ",arr3[i]);
    }
}
