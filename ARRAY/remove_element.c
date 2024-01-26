#include <stdio.h>
#include <stdlib.h>
void remove_element(int *arr,int element, int *size)
{
    int i;
    for(i=0;i<*size;i++)
    {
        if(arr[i]==element)
        {
            for(int j=i;j<*size;j++)
            {
                arr[j]=arr[j+1];
            }
            i--;(*size)--;
        }
    }
}
int main()
{
    int size,element,i;
    printf("Enter the size");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    printf("Enter the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element the to removed:\n");
    scanf("%d",&element);
    printf("After removed:\n");
    remove_element(arr,element,&size);
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
}
