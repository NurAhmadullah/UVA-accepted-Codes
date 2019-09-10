#include<stdio.h>
int main()
{
    unsigned long long a,b,s,d,t,i;
    while(scanf("%llu",&t)!=EOF){
    for(i=1;i<=t;i++)
    {
        scanf("%llu%llu",&s,&d);
    if(s>=d&&(s-d)%2==0){
        a=(s+d)/2;
        b=(s-d)/2;
        printf("%llu %llu\n",a,b);
    }
    else
        printf("impossible\n");
    }
    }
}
