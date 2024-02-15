#include <stdio.h>

int
main ()
{
  int a, b;
  printf ("enter a: ");
  scanf ("%d", &a);
  printf ("Enter b: ");
  scanf ("%d", &b);
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf ("A:%d\nB:%d", a, b);
  return 0;
}
