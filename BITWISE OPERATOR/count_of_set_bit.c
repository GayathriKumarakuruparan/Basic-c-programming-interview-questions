/******************************************************************************

                     C program to count number of 1's in an integer number.
This program will count total number of 1's in an integer number. Here we are counting total number of 1's in an integer number using a User Define Function.

Counting number of 1's using C program

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  unsigned int num;
  int count = 0;
  printf ("enter the hexadecimal value: ");
  scanf ("%x", &num);
  for (int i = 0; i < 32; i++)
	{
	  if ((num & (1 << i)) != 0)
		count++;
	}
  printf ("The count of set bits in this num is %d", count);
  return 0;
}
