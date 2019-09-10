#include<stdio.h>
unsigned long long GCD(unsigned long long a,unsigned long long b)
{
    unsigned long long gcd,n;
    gcd=b;
    while(a!=0){
        n=gcd%a;
        gcd=a;
        a=n;
    }

    return gcd;
}
int main()
{
    unsigned long long G,i,N,j;
    while(scanf("%llu",&N)){
            if(N==0) return 0;

    G=0;
    for(i=1; i<N; i++)
        for(j=i+1; j<=N; j++)
            {
            G+=GCD(i,j);
            }


    printf("%llu\n",G);
    }
}
