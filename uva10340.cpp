#include<stdio.h>
#include<string.h>
char s[100000],t[100000];
int main()
{
    int ns,nt,i,j,k,cs;

    while(scanf("%s",s)!=EOF){
            scanf("%s",t);
    ns=strlen(s);
    nt=strlen(t);
    j=0;
    for(i=0;i<nt;i++){
        if(s[j]==t[i])j++;
    }
    if(j==ns) printf("Yes\n");
    else printf("No\n");
    }
}
