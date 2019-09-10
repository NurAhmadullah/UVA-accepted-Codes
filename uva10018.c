#include<stdio.h>
unsigned long long reverse(unsigned long long n)
{
    unsigned long long r=0;
    while(n!=0)
    {
        r=r*10;
        r=r+n%10;
        n=n/10;
    }
    return r;
}
int main()
{
    unsigned long long a,r;
    int i,j,n;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
    scanf("%llu",&a);
    i=0;
    while(1){
    r=reverse(a);
    if(r==a)
        break;
    else{
       i++;
       a=r+a;
    }
    }
    printf("%d %llu\n",i,r);
    }
    return 0;
}
