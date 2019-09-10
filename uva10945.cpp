#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000],st1[1000];
    int n;
    while(gets(st)){
        n=strlen(st);
            for(int i=0;i<n;i++)
                if(st[i]>=97&&st[i]<=122)
                    st[i]=st[i]-32;

        if(strcmp(st,"DONE")==0)return 0;
        int j=0;
        for(int i=0;i<n;i++){
            if(st[i]>=65&&st[i]<=90)
                st1[j++]=st[i];
        }
        st1[j]='\0';
        n=strlen(st1);
        int ck=0;
        for(int i=0;i<n;i++)
            if(st1[i]!=st1[n-i-1]){
                ck=1;
                break;
            }
        if(ck==0)printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
}
