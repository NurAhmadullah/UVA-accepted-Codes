#include<stdio.h>
int main()
{
    double m,n,c,p1,p2,p3;
    int i;
    while(scanf("%lf%lf",&n,&m)){
            if(n==0&&m==0)
            return 0;
        p1=1;
        for(i=2;i<=n;i++)
            p1=p1*i;
        p2=1;
        for(i=2;i<=m;i++)
            p2=p2*i;
        p3=1;
        for(i=2;i<=n-m;i++)
            p3=p3*i;
        c=p1/(p2*p3);
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,m,c);
    }
    return 0;
}
