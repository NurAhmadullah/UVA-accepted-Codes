#include<stdio.h>
int main()
{
    int n,k,p,l,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d%d%d",&n,&k,&p);
    l=(k+p)%n;
    if(l==0) l=n;
    printf("Case %d: %d\n",i,l);
    }
}
