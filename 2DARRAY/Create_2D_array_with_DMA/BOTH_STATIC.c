/*BOTH STATIC*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int row=3,col=3,i,j;
    int arr[row][col];
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
