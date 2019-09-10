#include<bits/stdc++.h>
using namespace std;
#define sfi ({int x;scanf("%d",&x);x;})
#define sfl ({long long x;scanf("%I64d",&x);x;})
int rrr[1005];
int main()
{
    int t=sfi;
    while(t--)
    {
        int n=sfi,sum=0;
        for(int i=1;i<=n;i++)
        {
            rrr[i]=sfi;
            sum+=rrr[i];
        }
        double av=(double)sum/(double)n;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if((double)rrr[i]>av)cnt++;
        }
        double res=(double)cnt/(double)n;
        printf("%.3lf%%\n",res*100);
    }
}

