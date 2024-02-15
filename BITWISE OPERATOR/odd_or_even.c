
#include <stdio.h>
#define SIZE 8
int
main ()
{

  unsigned int n;
  printf ("enter the number: ");
  scanf ("%d", &n);
  if((n&1)==0)
  printf("it is even");
  else
  printf("it is odd");
  return 0;


}

