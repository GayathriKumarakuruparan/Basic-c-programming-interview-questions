#include <stdio.h>
#include<string.h>
char *remove_space(char *str)
{
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            for(int j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i=i-1;
        }
    }
    return str;
}
int main()
{
    char str[100];
    int alpha=0,digit=0,special_char=0;
    printf("Enter the string:\n");
    scanf(" %[^\n]",str);
    char *res=remove_space(str);
    printf("the alternative string is: \n%s",res);
}
