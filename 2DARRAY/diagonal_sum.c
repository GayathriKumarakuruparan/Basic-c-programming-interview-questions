#include <stdio.h>
#include <stdlib.h>
int
sumofdiagonals (int col, int **arr, int row, int *val1, int *val2)
{
  int i, j, k = 1;
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  if (i == j)
			{
			  *val1 += arr[i][j];

			}
		}
	}

  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  if (j == (row - k))
			{
			  *val2 += arr[i][j];
			  k++;
			}

		}
	}
}

int
main ()
{
  int row, col, i, j, main = 0, opposite = 0;
  printf ("Enter the rows and columns:\n");
  scanf ("%d %d", &row, &col);
  int *arr[row];
  for (i = 0; i < row; i++)
	{
	  arr[i] = malloc (col * sizeof (int));
	}
  printf ("Enter the array:\n");
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  scanf ("%d", &arr[i][j]);
		}
	}
  printf ("ARRAY:\n");
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  printf ("%d ", arr[i][j]);
		}
	  printf ("\n");
	}

  sumofdiagonals (col, arr, row, &main, &opposite);
  printf ("main diagonal sum is:%d\n", main);
  printf ("opposite diagonal sum is:%d\n", opposite);
}
