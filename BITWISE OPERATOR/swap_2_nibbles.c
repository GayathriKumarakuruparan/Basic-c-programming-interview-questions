#include<stdio.h>
int
main ()
{
  unsigned char n;
  //printf("enter the hexa decimal value:");
  scanf ("%hhx", &n);
  unsigned char get1stnibble = n & (((1 << 4) - 1));
  unsigned char get2ndnibble = n;
  for (int i = 0; i < 4; i++)
	{
	  get2ndnibble = get2ndnibble & (~(1 << i));
	}
  unsigned char temp = (get1stnibble << 4);
  unsigned char temp2 = (get2ndnibble >> 4);
  unsigned char result = temp | temp2;
  printf ("After swap : %X", result);
}
