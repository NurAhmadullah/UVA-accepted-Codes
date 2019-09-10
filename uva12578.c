#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double ar,ag,w,r,pi,l;
    pi=acos(-1);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&l);
        w=l*6/10;
        r=l*2/10;
        ar=pi*r*r;
        ag=l*w-ar;
        printf("%.2lf %.2lf\n",ar,ag);
    }
}
