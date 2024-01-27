/*BOTH DYNAMIC*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,i,j;
    printf("enter the row and column:\n");
    printf("rows:\n");
    scanf("%d",&row);
    printf("column:\n");
    scanf("%d",&col);
    int **arr;
    arr=malloc(row*sizeof(int*));
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
    printf("The elements are:\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}
