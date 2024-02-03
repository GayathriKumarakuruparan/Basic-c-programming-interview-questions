#include <stdio.h>
#include <stdlib.h>
void
ascending_order_row (int col, int **arr, int row)
{
  int i, j;
  int temp;
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  for (int k = (j + 1); k < col; k++)
			{
			  if (arr[i][j] > arr[i][k])
				{
				  temp = arr[i][j];
				  arr[i][j] = arr[i][k];
				  arr[i][k] = temp;
				}
			}
		}
	}
}

int
main ()
{
  int row, col, i, j;
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
  printf ("before ordering:\n");
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  printf ("%d ", arr[i][j]);
		}
	  printf ("\n");
	}

  ascending_order_row (col, arr, row);
  printf ("After ordering:\n");
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  printf ("%d ", arr[i][j]);
		}
	  printf ("\n");
	}
