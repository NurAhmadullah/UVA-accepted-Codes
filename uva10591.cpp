#include<stdio.h>
int main()
{
    unsigned long long n,s,m,i,j,t;
    scanf("%llu",&t);
    for(j=1;j<=t;j++){
    scanf("%llu",&n);
    i=0;
    s=1000;
    while(s>9&&s!=7)
    {
        if(i==0)m=n;
        else m=s;
        i=1;
        s=0;
    while(m!=0)
    {
        s=s+(m%10)*(m%10);
        m=m/10;
    }
    }
    if(s==1)printf("Case #%llu: %llu is a Happy number.\n",j,n);
    else printf("Case #%llu: %llu is an Unhappy number.\n",j,n);
    }
}
