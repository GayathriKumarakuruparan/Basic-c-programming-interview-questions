/*FIRST STATIC SECOND DYNAMIC*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int row=3,col,i,j;
    printf("enter the column:\n");
    printf("column:\n");
    scanf("%d",&col);
    int *arr[row];
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
