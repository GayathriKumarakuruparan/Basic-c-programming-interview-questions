#include <stdio.h>
#include <stdlib.h>

void inserted_last_element(int *arr,int *size,int *last)
{
   arr[(*size)-1]=*last;
   for(int i=0;i<*size;i++)
   {
       printf("%d ",arr[i]);
   }
}
int main()
{
    int size,extra_element;
    printf("Enter the size\n");
    scanf("%d",&size);
    int *arr=calloc(size,sizeof(int));
    printf("Before insertede:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element that need to insert:\n");
    scanf("%d",&extra_element);
    size+=1;
    arr=realloc(arr,size*sizeof(int));
    printf("After inserted:\n");
    inserted_last_element(arr,&size,&extra_element);
    free(arr);
}
