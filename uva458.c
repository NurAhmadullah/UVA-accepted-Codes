#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char s[1000];
    while(gets(s)){
    n=strlen(s);
    for(i=0;i<n;i++)
        printf("%c",s[i]-7);
        printf("\n");
    }
}
