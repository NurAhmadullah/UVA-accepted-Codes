#include<stdio.h>
#include<math.h>
#include<string.h>
int mm[188][1121][15],sk[1130],prm[200],x;
void sive()
{
    int sq=sqrt(1130);
    for(int i=4; i<1130; i+=2) sk[i]=1;
    for(int i=3; i<=sq; i++)if(sk[i]==0)for(int j=2*i; j<1130; j+=i)sk[j]=1;
    sk[0]=sk[1]=1;

    int k=0;
    for(int i=2; i<=1130; i++)
        if(sk[i]==0)prm[k++]=i;
}
int fun(int i,int num,int tkn)///sobgula coin mile tkn sonkhok... (protita coin er aladavabe tkn noy)
{
    if(num==0 and tkn==x) return 1;
    if(num<0 or i>187 or num-prm[i]<0 or tkn>x) return 0;
    if((num==0 and tkn!=x)or(num!=0 and tkn==x)) return 0;

    if(mm[i][num][tkn]!=-1) return mm[i][num][tkn];
    return mm[i][num][tkn]=fun(i+1,num,tkn)+fun(i+1,num-prm[i],tkn+1);
}
int main()
{
    int num;
    sive();
    while(scanf("%d%d",&num,&x))
    {
        if(num==0 and x==0)return 0;
        memset(mm,-1,sizeof mm);
        printf("%d\n",fun(0,num,0));
    }
}

