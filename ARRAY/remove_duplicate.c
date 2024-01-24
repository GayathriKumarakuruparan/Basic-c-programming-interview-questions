#include <stdio.h>
#include<stdlib.h>
#define MAX 100
void remove_duplicate_array(int *arr,int size)
{
   
   int *ar=malloc(MAX*sizeof(int)),j;
   for(j=0;j<size;j++)
    {
        ar[arr[j]]++;
        if(ar[arr[j]]==1)
        {
        printf("%d\n",arr[j]);
        }
    }   
}
int main()
{
    int size,i,j,flag=0;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    printf("Enter the array:\n");
    printf("before removing:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
      printf("After removing:\n");
    remove_duplicate_array(arr,size);   
}
