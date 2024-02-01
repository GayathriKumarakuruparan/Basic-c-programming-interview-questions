#include <stdio.h>
#include<stdlib.h>
int
identify_matrix (int col, int **arr, int row)
{
  int i = 0, j = 0, flag = 0;
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  if (((i == j) && (arr[i][j] != 1))
			  || ((i != j) && (arr[i][j] != 0)))
			{
			  flag = -1;
			  break;
			}
		}
	}
  return flag;
}

int
main ()
{
  int row, col;
  printf ("enter the row:\n");
  scanf ("%d", &row);
  printf ("enter the col:\n");
  scanf ("%d", &col);
  int **arr;
  int i, j, k;
  arr = malloc (row * sizeof (int *));
  for (i = 0; i < row; i++)
	{
	  arr[i] = malloc (col * sizeof (int));
	}
  printf ("ARRAY1:\n");
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  printf ("Enter the element array 1[%d][%d]: ", i, j);
		  scanf ("%d", &arr[i][j]);
		}
	}
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  printf ("%d", arr[i][j]);
		}
		printf("\n");
	}
  if (identify_matrix (col, arr, row) == 0)
	{
	  printf ("It is identify matrix");
	}
  else
	printf ("It is not an identify matrix");

}
