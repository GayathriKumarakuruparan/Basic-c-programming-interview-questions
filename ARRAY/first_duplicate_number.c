#include <stdio.h>
#include<stdlib.h>
int main()
{
    int size,i,j,flag=0;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    printf("Enter the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
    for(j=0;j<size;j++)
    {
        for(int k=j+1;k<size;k++)
        {
            if(arr[k]==arr[j])
            {
                flag=1;
                printf("The first dupicate number is %d\n",arr[k]);
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
}
