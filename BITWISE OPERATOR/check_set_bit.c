/******************************************************************************
Problem statement
Write a C program to check if nth bit is set or not in a 32 bit integer.

Pre-requisite: input no(32 bit longer), nth bit

Algorithm
Right shift by n times to get the nth bit at LSB
Do a bitwise and with 1(only LSB is set of 1, other bits 0).
IF result is 1, then nth bit is set
Else
Bit not set
Example wi
*******************************************************************************/

#include <stdio.h>

int
main ()
{

  int num;
  printf ("enter the num:");
  scanf ("%d", &num);
  printf ("enter the bit that to check:");
  int bit;
  scanf ("%d", &bit);
  if(bit>31)
  {
      printf("!!!!!FOR YOUR INFO------>enter the bit from 0 to 31!!!!!");
      return -1;
  }
  num = num >> bit;
  if (num & 1 != 0)
	{
	  printf ("the bit is set");
	}
  else
	{
	  printf ("the bit is not set");
	}

}
