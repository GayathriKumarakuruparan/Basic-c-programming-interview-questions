#include <stdio.h>
#include<stdlib.h>
int identical_or_not(int col,int (*arr)[col],int row,int col2,int **arr2, int row2)
{
    int i,j,count=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j]!=arr2[i][j])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
  int row1,col1,row2,col2,i,j;
  printf("Enter the rows1 and col1:\n");
  scanf("%d %d",&row1,&col1);
  printf("Enter the rows2 and col2:\n");
  scanf("%d %d",&row2,&col2);
  int (*arr)[col1];
  int *arr2[row2];
  arr=malloc(row1*sizeof(int[col1]));
  for(i=0;i<row2;i++)
  {
      arr2[i]=malloc(col2*sizeof(int));
  }
  if(row2==row2 && col1==col2)
  {
      printf("enter the element:\n");
      for(i=0;i<row1;i++)
      {
          for(j=0;j<col1;j++)
          {
              scanf("%d",&arr[i][j]);
          }
      }
      printf("enter the element:\n");
      for(i=0;i<row2;i++)
      {
          for(j=0;j<col2;j++)
          {
              scanf("%d",&arr2[i][j]);
          }
      }
      if(identical_or_not(col1,arr,row1,col2,arr2,row2)!=0)
      {
          printf("It's not an Identical:\n");
      }
      else
      printf("It's an Identical:\n");
  }
  else
  {
      printf("It's not an Identical:\n");
  }
}
