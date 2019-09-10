#include<stdio.h>
#include<string.h>
unsigned long long dcn(unsigned long long n)
{
    unsigned long long sum=0;
    while(n){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    unsigned long long n,m,sum;
    while(scanf("%llu",&n)!=EOF){
            if(n==0) return 0;
    m=n;
    while(m>9)
    m=dcn(m);

    printf("%llu\n",m);

    }
}
