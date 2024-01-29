
#include <stdio.h>
#include<stdlib.h>
void lower_diagonal(int col,int (*arr)[col],int row)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i>=j)
            {
                printf("%d ",arr[i][j]);
            }
            else
            {
                arr[i][j]=0;
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}
int main()
{
  int row,col,i,j;
  printf("Enter the rows and col:\n");
  scanf("%d %d",&row,&col);
  int (*arr)[col];
  arr=malloc(row*sizeof(int[col]));
  if(row==col)
  {
      printf("enter the element:\n");
      for(i=0;i<row;i++)
      {
          for(j=0;j<col;j++)
          {
              scanf("%d",&arr[i][j]);
          }
      }
      printf("LOWER DIAGONAL MATRICE:\n");
      lower_diagonal(col,arr,row);
  }
  else
  {
      printf("It's not a square matrices");
  }
}
