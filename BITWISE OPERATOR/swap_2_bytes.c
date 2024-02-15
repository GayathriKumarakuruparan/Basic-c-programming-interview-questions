/******************************************************************************

                  C program to swap bytes (for example convert 0x1234 to 0x3412).
Here, we have a number of two byte (short integer) in hexadecimal format and we are going to swap its bytes using C program.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  unsigned int num;
  printf ("enter the hexadecimal value: ");
  scanf ("%x", &num);
  unsigned int get_1st_byte = num & ((1 << 8) - 1);
  unsigned int get_2nd_byte = num;
  for (int i = 0; i < 8; i++)
	{
	  get_2nd_byte = get_2nd_byte & (~(1 << i));
	}
  unsigned int temp1 = (get_1st_byte << 8);
  unsigned int temp2 = (get_2nd_byte >> 8);
  unsigned int result = temp1 | temp2;
  printf ("The swapping of hexadecimal is : %x", result);


  return 0;
}
