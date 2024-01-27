#include <stdio.h>
#include<stdlib.h>
void sum_of_each_row(int col,int **arr,int row,int *sum)
{
    int count=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *sum+=arr[i][j];
        }
        printf("%d->row's sum is %d\n",count++,*sum);
        *sum=0;
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
    sum_of_each_row(col,arr,row,&sum);
}
