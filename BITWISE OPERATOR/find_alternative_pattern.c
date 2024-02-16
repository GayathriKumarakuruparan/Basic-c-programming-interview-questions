/******************************************************************************

                            Problem statement
Read an integer number from the user, then check given number contains an alternate bit pattern or not using C program.

C program to check a number contain the alternative pattern of bits
The source code to check a number contain the alternative pattern of bits is given below
RUN 1:
Enter number: 10
Binary Number: 1010
Alternate BIT pattern exists

RUN 2:
Enter number: 170
Binary Number: 10101010
Alternate BIT pattern exists

RUN 3:
Enter number: 123
Binary Number: 1111011
Alternate BIT pattern does not exist
*******************************************************************************/

#include <stdio.h>

int
main ()
{

  int num, i = 0, first, second, count = 0;
  printf ("enter the num:");
  scanf ("%d", &num);
  int temp = num;
  while (temp)
	{
	  count++;
	  temp = temp >> 1;
	}
  for (i = 0; i < count - 1; i++)
	{
	  first = (num >> i) & 1;
	  second = (num >> (i + 2)) & 1;

	  if (first == second)
		{
		  continue;
		}
	  else
		{
		  printf ("The bit does't has alternative pattern");
		  return -1;
		}
	}

  printf ("The bit has alternative pattern");
  return 0;
}
