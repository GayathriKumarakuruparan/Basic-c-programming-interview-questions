#include <stdio.h>
#include<string.h>
void separete_string(char *str)
{
    for(int i=0;i<strlen(str);i++)
    {
        printf("%c\n",str[i]);
    }
}
int main()
{
   char str[100];
   printf("enter the strings :\n");
   scanf(" %[^\n]",str);
   separete_string(str);
}
