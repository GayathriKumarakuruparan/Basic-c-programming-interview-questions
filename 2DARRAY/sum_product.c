#include <stdio.h>
#include<stdlib.h>
void sum_product(int col,int **arr,int row,int *sum,int *product)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *sum+=arr[i][j];
            *product*=arr[i][j];
        }
    }
}
int main()
{
    int row,col,i,j,sum=0,product=1;
    int **arr;
    printf("Enter the row:\n");
    scanf("%d",&row);
    printf("Enter the column:\n");
    scanf("%d",&col);
    arr=malloc(row*sizeof(int *));
    for(i=0;i<row;i++)
    {
        arr[i]=malloc(col*sizeof(int));
    }
    printf("Enter the elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    sum_product(col,arr,row,&sum,&product);
    printf("Sum and Product of all elements:\nsum:%d\nproduct:%d\n",sum,product);  
}
