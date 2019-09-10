#include<bits/stdc++.h>
using namespace std;
#define sfi ({int x;scanf("%d",&x);x;})
#define sfl ({long long x;scanf("%I64d",&x);x;})
int main()
{
    while(true)
    {
        int n=sfi,mxx=0,mxv=0;
        if(n==0)break;
        for(int i=1; i<=n; i++)
        {
            int l=sfi,w=sfi,h=sfi;
            int v=l*w*h;
            ///eivabe kaj korena
            /*
            if(h>=mxx)
            {
                mxx=h;
                mxv=(mxv,v);
            }
            */
            if(h>mxx or (h==mxx and v>mxv))
            {
                mxx=h;
                mxv=v;
            }
        }
        printf("%d\n",mxv);
    }
}

