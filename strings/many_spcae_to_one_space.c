/*
Input string:
Pointers         are      sharp           knives.
Output String:
Pointers are sharp knives.
Blank can be spaces or tabs. (replace with single space).
*/


#include <stdio.h>
#include<string.h>
int main()
{
   char str[100];
   printf("enter the strings :\n");
   scanf(" %[^\n]",str);
   for(int i=0;i<strlen(str);i++)
   {
      
      if(((str[i+1]==' ')&&(str[i]==' ')))
      {
          for(int j=i;str[j]!='\0';j++)
          {
              str[j]=str[j+1];
          }
           i=i-1;
      }
     
   }
   printf("%s",str);
   
}
