#include <stdio.h>
char remove_char(char *str,char *ch)
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!=*ch)
        {
            str[j++]=str[i];
        }
        i++;
    }
    str[j]='\0';
    printf("%s",str);
}
int main()
{
    char str[100],ch;
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    printf("Enter the character that have to remove:\n");
    scanf(" %c",&ch);
    remove_char(str,&ch);
    
}
