#include <stdio.h>
#include<stdlib.h>
int main()
{
    int size,new_element,position,i,last,next;
    printf("Enter the size:\n");
    scanf("%d",&size);
    printf("Enter the arrays:\n");
    int *arr=malloc(size*sizeof(int));
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number that need to insert:\n");
    scanf("%d",&new_element);
    printf("Enter the position that to insert:\n");
    scanf("%d",&position);
    size+=1;
    arr=realloc(arr,(size+1)*sizeof(int));
    last=size-1;
    next=size;
    printf("After insertion\n");
    for(i=0;i<size;i++)
    {
        if(i==(position-1))
        {
            for(int j=i;j<size;j++)
            {
                arr[next--]=arr[last--];
            }
            arr[i]=new_element;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
}
