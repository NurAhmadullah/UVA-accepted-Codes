///jodi borgomul ti integer hoy tahole tar bejor sonkhok divisor thake tai "yes"
#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long n,r;
    double d;
    while(scanf("%llu",&n)){
        if(n==0)return 0;

    r=sqrt(n);
    d=sqrt(n);

    if(r==d)
        printf("yes\n");
    else
        printf("no\n");
    }
    return 0;
}
