#include <stdio.h>
#include<string.h>
int main()
{
   char str[100];
   int vowel,consonant;
   printf("enter the strings :\n");
   scanf(" %[^\n]",str);
   for(int i=0;i<strlen(str);i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' &&str[i]<= 'Z'))
        {
            if(((str[i]=='a')||(str[i]=='A'))||((str[i]=='e')||(str[i]=='E'))||((str[i]=='i')||(str[i]=='I'))||((str[i]=='o')||(str[i]=='O'))||((str[i]=='u')||(str[i]=='U')))
            {
                vowel+=1;
            }
            else
            consonant+=1;
        }
        
    }
   printf("vowels: %d\nconsonant: %d",vowel,consonant);
}
