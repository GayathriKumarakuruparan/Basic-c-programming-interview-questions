/******************************************************************************

                           First run:
enter the no ( max range 255)
153
binary representation is: 10011001
it's palindrome

Second run:
enter the no ( max range 255)
24
binary representation is: 00011000
it's palindrome

Third run:
enter the no ( max range 255)
-8
binary representation is: 11111000
Not palindrome 

*******************************************************************************/
#include <stdio.h>
#define SIZE 8
int
main ()
{

  unsigned int n;


  int val[SIZE], flag, k = 0;



  printf ("enter the number: ");


  scanf ("%d", &n);


  for (int i = 7; i >= 0; i--)


	{


	  flag = n & (1 << i);


	  if (flag == 0)


		{


		  val[k++] = 0;


		}


	  else
		val[k++] = 1;


	}


  for (int j = 0; j < SIZE; j++)


	printf ("%d", val[j]);


  printf ("\n");


  for (int j = 0; j < SIZE; j++)


	{


	  if (val[j] != val[SIZE - j - 1])


		{


		  printf ("it's not a palindrome");


		  return 0;


		}


	}


  printf ("it's a palindrome");


  return 0;


}
