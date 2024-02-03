#include <stdio.h>
#include <stdlib.h>
void
frequent_even (int col, int **arr, int row)
{
  int i, j;
  int freq = 0;
  for (i = 0; i < row; i++)
	{
	  for (j = 0; j < col; j++)
		{
		  if (arr[i][j] % 2 == 0)
			{
			  freq++;
			  printf ("%d ", arr[i][j]);
			}
		}
	}
  printf ("\nFrequency of EVEN numbers is: %d\n", freq);
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
  printf ("Frequent even element:\n");
  frequent_even (col, arr, row);
}
