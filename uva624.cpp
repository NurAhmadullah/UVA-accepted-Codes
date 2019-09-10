#include<stdio.h>
int main()
{
    int n,ttl,rr[21],sum=0,rs=0,mx=0,k,x;
    while(scanf("%d%d",&ttl,&n)!=EOF)
    {
        sum=mx=rs=k=0;
        for(int i=0; i<n; i++)
            scanf("%d",&rr[i]);
        for(int i=0; i<=(1<<n); i++)
        {
            sum=k=0;
            for(int j=0; j<n; j++)
            {
                if((1<<j)&i)
                {
                    sum+=rr[j];
                    k++;
                }
            }
            if((sum>mx and sum<=ttl)or(sum==mx and k>x))
            {
                    mx=sum;
                    rs=i;
                    x=k;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(rs&(1<<i))
                printf("%d ",rr[i]);
        }
        printf("sum:%d\n",mx);
    }
}

