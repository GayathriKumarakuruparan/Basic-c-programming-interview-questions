/******************************************************************************

Problem statement
Give a number of one byte (8 bits) and we have to check whether all bits are UNSET/LOW.

Example -1

Input number: 0 
Binary value: 00000000
Output: Yes, all bits are unset 
Example -2

Input number: 50 
Binary value: 00110011
Output: No, all bits are not unset 
Checking whether all bits of a number are UNSET/LOW
To solved this program, we will use BITWISE AND (&) operator, we will traverse bits from 7 to 0 (in case of two bytes number, it would be 15 to 0 and so on...) and check if there is any SET/HIGH bit, then we will break the loop and output will be false that means "all bits are not UNSET/LOW".

C program to check whether all bits of a number are UNSET/LOW

*******************************************************************************/

#include <stdio.h>
int
unset_bits (int num)
{
  int val, count = 0;
  for (int i = 0; i < 8; i++)
	{
	  val = num & (1 << i);
	  if (val == 0)
		{
		  count++;
		}
	}
  return count;

}

int
main ()
{
  int num;
  printf ("Enter an integer number (between 0-255): ");
  scanf ("%d", &num);
  if (unset_bits (num) == 8)
	printf ("All bits are UNSET/LOW.");
  else
	printf ("All bits are not UNSET/LOW.");
}
