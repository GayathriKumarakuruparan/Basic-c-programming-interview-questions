/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
   
#include <stdio.h>

int 
main () 
 { 
int num, val, count = 0;
  
printf ("enter the number: ");
  
scanf ("%d", &num);
  
for (int i = 0; i < 32; i++)
	
	{
	  
    val = num & (1 << i);
    	  
    if ((val != 0))
    		
    count = i;
    	
    }
  
printf ("The highest set bit of the given number: %d", count);
  
return 0;

}


