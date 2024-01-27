#include <stdio.h>
#include<stdlib.h>
int main()
{
    int size,i,rotation=2,temp,k,l,j;
    printf("enter the size:\n");
    scanf("%d",&size);
    int *arr=calloc(size,sizeof(int));
    printf("enter the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(k=0;k<rotation;k++)
    {
        temp=arr[size-1];
        for(j=(size-1);j>=0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    printf("After right rotation\n");
    for(l=0;l<size;l++)
    {
        printf("%d ",arr[l]);
    }
}
