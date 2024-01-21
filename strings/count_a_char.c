#include <stdio.h>
int count_char(char *str,char *ch)
{
    int i=0,count=0;
    while(str[i]!='\0')
    {
        if(str[i]==*ch)
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str[100],ch;
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    printf("Enter the character that have to be count:\n");
    scanf(" %c",&ch);
    int count=count_char(str,&ch);
    printf("%d",count);
    
}
