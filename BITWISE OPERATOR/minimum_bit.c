/******************************************************************************
Problem statement
Given an integer number and we have to find the total number of minimum bit(s) which can be used to store given integer number.

C program to get minimum number of bits to store an integer number

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int num, val, count, flag = 0;
  printf ("enter the number:\n");
  scanf ("%d", &num);
  unsigned int mask = 1;
  for (int i = 0; i < 32; i++)
	{
	  val = num & (mask<<i);
	  if (val != 0)
		{

		  count = i;
		}
	}
  printf ("Total number of bits required = %d\n", ++count);
}
