#include <stdio.h>
#include<stdlib.h>
int main()
{
    int size,i,j,count=1,flag=0;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    int *occurence=malloc(100*sizeof(int));
    printf("Enter the array:\n");
    for(i=1;i<=size;i++)
    {
        scanf("%d",arr+i);
        occurence[arr[i]]++;
    }
    for(j=1;j<=size;j++)
    {
        printf("%d is repeated in count of %d times\n",j,occurence[j]);
    }
    
}
