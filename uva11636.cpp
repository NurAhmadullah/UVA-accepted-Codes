#include<stdio.h>
int main()
{
    int i,n,p,t=0;
    while(scanf("%d",&n)){
        if(n<0) return 0;
    i=0;
    p=1;
    while(n>p)
    {
        p=p*2;
        i++;

    }
    t++;
    printf("Case %d: %d\n",t,i);
    }
}

