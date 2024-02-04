
#include <stdio.h>
#include <stdlib.h>
void
upper_triangle (int col, int (*arr)[col], int row)
{
  int i, j;
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  if (i > j)
			{
			  arr[i][j] = 0;
			}
		}
	}
}

int
main ()
{
  int row, col, i, j;
  printf ("Enter the row and col:\n");
  scanf ("%d %d", &row, &col);
  int (*arr)[col];
  arr = malloc (row * sizeof (int[col]));
  printf ("Enter the elements:\n");
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  scanf ("%d", &arr[i][j]);
		}
	}
  printf ("UPPER TRIANGLE OF MATRIX:\n");
  upper_triangle (col, arr, row);
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  if (arr[i][j] != 0)
			{
			  printf ("%d ", arr[i][j]);
			}
		  else
			{
			  printf ("  ");
			}

		}
	  printf ("\n");
	}
}
