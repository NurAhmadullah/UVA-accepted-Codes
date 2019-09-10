#include<stdio.h>
int main()
{
    int h,m;
    double a;
    while(scanf("%d:%d",&h,&m)!=EOF)
    {
        if(h==0&&m==0) return 0;
        a=h*30-m*5.5;
        if(a<0) a=a*-1;
        if(a>180) a=360-a;
        printf("%.3lf\n",a);
    }
}
