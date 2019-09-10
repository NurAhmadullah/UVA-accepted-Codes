#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,nm,j,tc,ti;
    char st[100000],ch,s[100];
    scanf("%d%*c",&tc);
    for(ti=1;ti<=tc;ti++){
    gets(st);
    j=0;
    n=strlen(st);
    printf("Case %d: ",ti);
    for(int i=0; i<n; i++)
    {
        if(i==0)ch=st[i];

        if(st[i]>=65&&st[i]<=90)
        {
            if(i!=0){
            s[j++]='\0';
            nm=atoi(s);

            for(int k=0; k<nm; k++)printf("%c",ch);
            ch=st[i];
            j=0;
            }
        }
        else
            s[j++]=st[i];
        if(i==n-1){
            s[j++]='\0';
            nm=atoi(s);//printf("%s   %d",s,nm);
            for(int k=0;k<nm;k++)printf("%c",ch);
        }
    }
    printf("\n");
    }
    return 0;
}
