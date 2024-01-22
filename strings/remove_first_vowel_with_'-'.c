#include <stdio.h>
#include<string.h>
char delete_vowel(char *str)
{
    int i=0;
    for(i=0;i<strlen(str);i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' &&str[i]<= 'Z'))
        {
            if(((str[i]=='a')||(str[i]=='A'))||((str[i]=='e')||(str[i]=='E'))||((str[i]=='i')||(str[i]=='I'))||((str[i]=='o')||(str[i]=='O'))||((str[i]=='u')||(str[i]=='U')))
            {
               str[i]='-';
               return *str;
            }
        }
        
    }
}
int main()
{
   char str[100];
   printf("enter the strings :\n");
   scanf(" %[^\n]",str);
   delete_vowel(str);
   printf("%s",str);
}
