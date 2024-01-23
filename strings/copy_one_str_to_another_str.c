
#include <stdio.h>
#include<string.h>
char*my_strcpy(char *str1,char *str2)
{
   int i=0;
   while(str2[i]!='\0')
   {
       str1[i]=str2[i];
       i++;
   }
   str1[i]='\0';
   return str1;
}
int main()
{
    char str[100],str2[100];
    printf("Enter the string:\n");
    scanf(" %[^\n]",str);
    char *res=my_strcpy(str2,str);
    printf("the copied string is %s",res);
}
