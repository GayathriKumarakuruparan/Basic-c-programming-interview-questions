#include <stdio.h>

int
main ()
{
  unsigned int num, left_shift, right_shift;
  printf ("enter the hexadecimal value: ");
  scanf ("%x", &num);
  int shift;
  printf ("Enter the shift value: ");
  scanf ("%d", &shift);
  left_shift = (num << shift);
  printf ("\nThe left shift of the hexadecimal is  %x\n", left_shift);
  right_shift = (num >> shift);
  printf ("The right shift of the hexadecimal is  %x", right_shift);
  return 0;
}
