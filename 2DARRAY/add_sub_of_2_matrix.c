#include <stdio.h>
#include<stdlib.h>
void SUM_SUB(int col1,int **arr,int row1,int col2,int (*arr2)[col2],int row2,int c,int (*sum_sub)[c],int r)
{
    int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                sum_sub[i][j]=arr[i][j]+arr2[i][j];
            }
        }
         printf("Sum of the element\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",sum_sub[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                sum_sub[i][j]=arr[i][j]-arr2[i][j];
            }
        }
         printf("Subtraction of the element\n");
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",sum_sub[i][j]);
            }
            printf("\n");
        }
    
}
int main()
{
    int row1, col1, row2, col2, i, j, sum=0, sub;
    printf("Enter the row:\n");
    scanf("%d",&row1);
    printf("Enter the col\n");
    scanf("%d",&col1);
    printf("Enter the row:\n");
    scanf("%d",&row2);
    printf("Enter the col\n");
    scanf("%d",&col2);
    int *arr[row1];
    int (*arr2)[col2];
    int r=row1>row2?row1:row2;
    int c=col1>col2?col1:col2;
    int sum_sub[r][c];
    for(i=0;i<row1;i++)
    {
        arr[i]=malloc(col1*sizeof(int));
    }
    arr2=malloc(row2*sizeof(int[col2]));
    if(row1==row2 && col1==col2)
    {
        printf("Enter the element\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        printf("Enter the element\n");
        for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
            {
                scanf("%d",&arr2[i][j]);
            }
        }
        printf("sum and sub of two array:\n");
        SUM_SUB(col1,arr,row1,col2,arr2,row2,c,sum_sub,r);
    }
    
    else
    printf("\nMatrix can not be added, Number of Rows & Cols are Different");
}
