#include<bits/stdc++.h>
using namespace std;
#define sfi ({int x;scanf("%d",&x);x;})

int kadane(int a[], int size)
{
    int mxx = 0, sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += a[i];
        if (sum < 0) sum = 0;
        if (mxx < sum) mxx = sum;
    }
    return mxx;
}
int main()
{
    int rrr[105][105],a[105],n;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)rrr[i][j]=sfi;
        }
        int mxx=0;
        for(int i=0; i<n; i++)
        {
            memset(a,0,sizeof a);
            for(int j=i; j<n; j++)
            {
                for(int k=0; k<n; k++)a[k]+=rrr[j][k];
                int x=kadane(a,n);
                mxx=max(mxx,x);
            }
        }
        cout<<mxx<<endl;
    }
}


