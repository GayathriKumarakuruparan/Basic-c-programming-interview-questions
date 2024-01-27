/*FIRST DYNAMIC SECOND STATIC*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int row,col=3,i,j;
    printf("enter the row:\n");
    printf("row:\n");
    scanf("%d",&row);
    int (*arr)[col];
    arr=malloc(row*sizeof(int[col]));
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
