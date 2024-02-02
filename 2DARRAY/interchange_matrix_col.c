#include <stdio.h>
#include <stdlib.h>
void
interchange_matrix_col (int col, int **arr, int row, int val1, int val2)
{
  int i, j;
  int temp;
  for (i = 0; i < col; i++)
	{

	  temp = arr[i][val2 - 1];
	  arr[i][val2 - 1] = arr[i][val1 - 1];
	  arr[i][val1 - 1] = temp;
	}
}

int
main ()
{
  int row, col, i, j, val1, val2;
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
  printf ("Enter the row should be interchange: ");
  scanf ("%d", &val1);
  printf ("where should it placed:");
  scanf ("%d", &val2);
  if ((val1 <= row) && (val2 <= row))
	{
	  interchange_matrix_col (col, arr, row, val1, val2);
	  for (i = 0; i < row; i++)
		{
		  for (j = 0; j < col; j++)
			{
			  printf ("%d ", arr[i][j]);
			}
		  printf ("\n");
		}
	}
  else
	{
	  printf ("Enter the valid values:\n");
	}
}
