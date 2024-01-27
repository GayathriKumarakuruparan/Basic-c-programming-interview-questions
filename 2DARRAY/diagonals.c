
#include <stdio.h>
#include<stdlib.h>
void diagonals(int col,int (*arr)[col],int row)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           if(i == j)
           printf("%d ",arr[i][j]);
           else
           printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    int row,col,i,j;
    printf("Enter the row:\n");
    scanf("%d",&row);
    printf("Enter the column:\n");
    scanf("%d",&col);
    int (*arr)[col];
    arr=malloc(row*sizeof(int[3]));
    printf("Enter the elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter element[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    if(col==row)
    {
    printf("The diagonal of this 2D array:\n");
    diagonals(col,arr,row);
    }
    else
    {
        printf("Matrix is not a square matrix");
    }
}
