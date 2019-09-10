#include<stdio.h>
int main()
{
    unsigned long long a,b,i,t;
    scanf("%llu",&t);
    for(i=1;i<=t;i++){
    scanf("%llu%llu",&a,&b);
    if(b%a==0)printf("%llu %llu\n",a,b);
    else printf("-1\n");
}
}
