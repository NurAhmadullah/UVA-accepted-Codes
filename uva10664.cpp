#include<bits/stdc++.h>
using namespace std;
#define sf scanf
int n,wt[25],sum;
int dp[25][2010];
int fun(int i,int w)
{
    if(i>n)return 0;
    if(sum/2==w)return 1;
    if(dp[i][w]!=-1)return dp[i][w];

    int ret=0;
    ret=ret | fun(i+1,w+wt[i]);
    ret=ret | fun(i+1,w);

    dp[i][w]=ret;

    return dp[i][w];
}

int main()
{
    string s;
    int nm,i,t;
    cin>>t;
    getchar();
    for(int ti=1; ti<=t; ti++)
    {
        sum=n=0;
        memset(dp,-1,sizeof dp);
        getline(cin,s);
        stringstream ss(s);
        i=0;
        while(ss>>nm)
        {
            wt[i++]=nm;
            sum+=nm;
        }
        n=i-1;
        if(sum%2==1)
        {
            printf("NO\n");
            continue;
        }
        if(fun(0,0))
            printf("YES\n");
        else
            printf("NO\n");
    }
}

