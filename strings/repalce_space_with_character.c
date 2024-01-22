#include <stdio.h>
#include<string.h>
char replace_space(char *str,char ch)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            str[i]=ch;
        }
        i++;
    }
    return *str;
}
int main()
{
    char str[100],ch;
    printf("enter the string:\n");
    scanf("%[^\n]",str);
    printf("enter the char the have to replace with ' ':\n");
    scanf(" %c",&ch);
    replace_space(str,ch);
    printf("the string that replaced : \n%s",str);
}
