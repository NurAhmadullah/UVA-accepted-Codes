#include<stdio.h>
#include<string.h>
#include<math.h>
#define high 100000
int chek[high]={0};
void sive()
{
    for(int i=4;i<high;i+=2)chek[i]=1;
    for(int i=3;i<sqrt(high);i+=2)for(int j=2*i;j<high;j+=i)chek[j]=1;
    chek[0]=chek[1]=1;
}
int main()
{
    sive();
    int n,ck,tc,ti;
    char st[100000];
    int fr[125]={0};
    scanf("%d%*c",&tc);
    for(ti=1;ti<=tc;ti++){
        scanf("%s",st);
        ck=0;
    printf("Case %d: ",ti);
    n=strlen(st);
    for(int i=0;i<n;i++){
        fr[st[i]]++;        ///khub sundor 1 ta jinish
    }
    for(int i=0;i<125;i++){
    if(fr[i]!=0&&chek[fr[i]]==0){
        printf("%c",i);
        ck=1;
    }
    fr[i]=0;
    }
    if(ck==0)printf("empty\n");
    else printf("\n");
    }
}
