#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    int n,i,c=0;
    while(gets(s))
    {
        n=strlen(s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='\"')
            {
               c++;
               if(c%2==1) printf("``");
               else printf("\'\'");
               continue;
            }
            printf("%c",s[i]);
        }
        printf("\n");
    }
}
