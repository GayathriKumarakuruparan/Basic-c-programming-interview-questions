/******************************************************************************

                           C program to set/clear (high/low) bits of a number.
This program will set or clear (high or low) bits of a number, this operation can be performed using Bitwise OR (|) and Bitwise AND (&) operators.
*******************************************************************************/
#include <stdio.h>

int
main ()
{
  unsigned int num, left_shift, right_shift;
  printf ("enter the hexadecimal value: ");
  scanf ("%x", &num);
  int set, clear;
  printf ("Enter the bit that have to set:");
  scanf ("%d", &set);
  printf ("Enter the bit that have to clear:");
  scanf ("%d", &clear);
  unsigned int set_bit = num;
  set_bit |= (1 << set);
  unsigned int clear_bit = num;
  clear_bit &= (~(1 << clear));
  printf
	("The value after the given bit is set: 0x%X\nThe value after the given bit is clear: 0x%X",
	 set_bit, clear_bit);
  return 0;
}
