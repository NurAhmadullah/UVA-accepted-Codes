#include<stdio.h>
int main()
{
    int t,a,i,j;
    double n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf",&n);
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
        n=n/10;
        a=(int)n%10;
        if(a<0) a=a*(-1);
        printf("%d\n",a);
    }
return 0;
}

