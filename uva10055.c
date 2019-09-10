#include<stdio.h>
int main()
{
    unsigned long long x,y,d;
    while(scanf("%llu%llu",&x,&y)!=EOF)
    {
        if(x>y)
        {
            d=x-y;
            printf("%d\n",d);
        }

        else
        {
            d=y-x;
            printf("%d\n",d);
        }
    }
    return 0;
}
