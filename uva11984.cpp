#include<cstdio>
int main()
{
    double c,d,rs;
    int tt;
    scanf("%d",&tt);
    for(int ti=1; ti<=tt; ti++)
    {
        scanf("%lf%lf",&c,&d);
        printf("Case %d: ",ti);
        if(d==0)
            printf("%.2lf\n",c);
        else
            printf("%.2lf\n",c+d*5/9);
    }
}

