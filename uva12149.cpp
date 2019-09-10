#include<stdio.h>
int main()
{
    int n,i,sum;
    while(scanf("%d",&n)){
            if(n==0) return 0;
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("%d\n",sum);
    }
}
