#include <stdio.h>
#include <stdlib.h>
void swap(int *element1,int *element2)
{
    int temp=*element1;
    *element1=*element2;
    *element2=temp;
}
void reverse_array(int *arr,int *size)
{
    int last=*size-1;
    for(int i=0;i<(*size/2);i++)
    {
        swap(&arr[i],&arr[last--]);
    }
    for(int j=0;j<*size;j++)
    {
        printf("%d ",arr[j]);
    }
}
int main()
{
    int size;
    printf("Enter the size\n");
    scanf("%d",&size);
    int *arr=calloc(size,sizeof(int));
    printf("Before reverse:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("After reverse:\n");
    reverse_array(arr,&size);
    free(arr);
}
