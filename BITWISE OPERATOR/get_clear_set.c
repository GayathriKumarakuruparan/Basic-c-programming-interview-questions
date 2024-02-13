/******************************************************************************
CLEAR <5:3>(bits)
GET 3 bits from lsb side
SET <5:3>(bits)

Eg: num=18-> 0001 0010
     Clear->(5:3)-> 0000 0010
      GET 3bits from lsb side-> 010
      SET <5:3> -> 0011 1010
       final output->0011 1010 -> 58.
SAMPLE OUTPUT:
enter the number : 18
Result is 58.
*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int num;
  printf ("Enter the number:\n");
  scanf ("%d", &num);
  int clear = num, get, set, res;
  for (int i = 5; i >= 3; i--)
	{
	  clear = clear & (~(1 << i));
	}
  get = num & ((1 << 3) - 1);
  set = clear;
  for (int i = 5; i >= 3; i--)
	{
	  set = set | (1 << i);
	}

  res = set | get;
  printf ("the result is: %d", res);
}
 
