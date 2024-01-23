#include <stdio.h>
#include<string.h>
char *concatenate(char *str1,char *str2)
{
    for(int i=0;i<strlen(str2);i++)
    {
         str1[strlen(str1)]=str2[i];
    }
    return str1;
}
int main()
{
    char str[100],str2[100];
    printf("Enter the string:\n");
    scanf(" %[^\n]",str);
    printf("Enter the string2:\n");
    scanf(" %[^\n]",str2);
    char *res=concatenate(str,str2);
    printf("the concatenate string is: \n%s",res);
}
