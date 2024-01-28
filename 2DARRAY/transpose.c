#include <stdio.h>
#include<stdlib.h>
void transpose(int col,int **arr,int row,int (*trans)[col])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            trans[j][i]=arr[i][j];
        }
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row,col,i,j;
    printf("Enter the row:\n");
    scanf("%d",&row);
    printf("Enter the col\n");
    scanf("%d",&col);
    int *arr[row];
    int trans[row][col];
    for(i=0;i<row;i++)
    {
        arr[i]=malloc(col*sizeof(int));
    }
    printf("Enter the element\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("transposed array:\n");
    transpose(col,arr,row,trans);
}
