#include<stdio.h>
int main()
{
    int a,n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) return 0;
        if(n>=101) a=n-10;
        else a=91;
        printf("f91(%d) = %d\n",n,a);
    }
}
