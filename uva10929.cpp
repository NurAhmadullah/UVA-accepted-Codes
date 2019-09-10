#include<stdio.h>
#include<string.h>
int main()
{
    char st[1010];
    int n,mod;
    while(gets(st)){
    if(strcmp(st,"0")==0)return 0;
    n=strlen(st);
    mod=0;

    for(int i=0;i<n;i++)
        mod=((mod*10)+(st[i]-48))%11;

    if(mod==0)printf("%s is a multiple of 11.\n",st);
    else printf("%s is not a multiple of 11.\n",st);
    }
    return 0;
}
