#include <stdio.h>
#define ROW 3
#define COL 3
void multiple (int col, int (*arr)[col], int row, int (*arr2)[col],
		  int (*mul)[col])
{
  static int i = 0, j = 0, k = 0;
  if (i < row)
	{
	  if (j < col)
		{
		  if (k < col)
			{
			  mul[i][j] += arr[i][k] * arr2[k][j];
			  k++;
			  multiple (col, arr, row, arr2, mul);
			}
		  k = 0;
		  j++;
		  multiple(col,arr,row,arr2,mul);
		}
		j=0;
		i++;
		multiple(col,arr,row,arr2,mul);
	}
}

int main ()
{
  int arr[ROW][COL], i, j, k;
  int arr2[ROW][COL];
  int mul[ROW][COL] = { 0 };
  printf("ARRAY1:\n");
  for (i = 0; i < ROW; i++)
	{
	  for (j = 0; j < COL; j++)
		{
		  printf ("Enter the element array 1[%d][%d]: ", i, j);
		  scanf ("%d", &arr[i][j]);
		}
	}
	printf("ARRAY2:\n");
  for (i = 0; i < ROW; i++)
	{
	  for (j = 0; j < COL; j++)
		{
		  printf ("Enter the element array 2[%d][%d]: ", i, j);
		  scanf ("%d", &arr2[i][j]);
		}
	}
  multiple (COL, arr, ROW, arr2, mul);
  printf("the result:\n");
  for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
		{
		  printf ("%d ", mul[i][j]);
		}
		printf("\n");
	}
}
