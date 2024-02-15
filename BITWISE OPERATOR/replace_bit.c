/******************************************************************************
C program to replace bit in an integer at a specified position from another integer
In this article, we are going to learn how to replace a bit of a number at a specified position from another number?
Submitted by Radib Kar, on December 30, 2018
Problem statement
Write a C program to replace specified bit of a number from another number.

Let first no whose bit is to be replaced is:
    7 //0000 0111

    Second no from whom bit is to be replaced
    8 //0000 1000

    Specified position: 3 (3bit)
*******************************************************************************/

#include <stdio.h>

int
main ()
{
  unsigned int num, num2;
  printf ("enter the numbers: ");
  scanf ("%d %d", &num, &num2);
  int pos, bit;
  printf ("Enter the bit that you want to get from num2: ");
  scanf ("%d", &bit);
  printf ("Enter the position: ");
  scanf ("%d", &pos);
  int get;
  get = num2 & (1 << bit);
  if (get == 0)
  {
	get = 0;
  }
  else
  {
	get = 1;
  }
  num = num | (get << pos);
  printf ("Enter the num value after the replacement: %d", num);
  return 0;
}
/*Another prespection*/

#include <stdio.h>

int
main ()
{
  unsigned int num, num2;
  printf ("enter the numbers: ");
  scanf ("%d %d", &num, &num2);
  int pos, bit;
  printf ("Enter the position: ");
  scanf ("%d", &pos);
  int get;
  get = num2 & (1 << pos);
  if(get!=0)
  {
       num = num |get;
  }
 else
 {
     int flag = 255; //FF, all bit set to 1(considering 8 bit)
    get = 1 << pos;
    //this set only the specified position bit 0 others 1
    flag = flag ^ get;
   num &= flag;
 }
  printf ("Enter the num value after the replacement: %d", num);
  return 0;
}
