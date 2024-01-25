#include <stdio.h>
#include<stdlib.h>
int main()
{
    int size,i;
    printf("Enter the size:\n");
    scanf("%d",&size);
    printf("Enter the arrays:\n");
    int *arr=malloc(size*sizeof(int));
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before deleting:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    size-=1;
    arr=realloc(arr,size*sizeof(int));
    printf("\nAfter deleting:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
}
