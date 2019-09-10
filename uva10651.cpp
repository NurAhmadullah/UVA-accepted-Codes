#include<bits/stdc++.h>
using namespace std;
#define sfi ({int a;scanf("%d",&a);a;})
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int reset(int N,int pos)
{
    return N= N & ~(1<<pos);
}
int dp[4100];
int fun(int mask)
{
    if(dp[mask]!=-1)return dp[mask];
    int cnt=0;
    for(int i=0; i<12; i++)cnt+=check(mask,i);
    for(int i=0; i<=9; i++)
    {
        if(check(mask,i) and check(mask,i+1) and !check(mask,i+2))
        {
            cnt=min(cnt,fun(Set(reset(reset(mask,i),i+1),i+2)));
        }
        int j=11-i;
        if(check(mask,j) and check(mask,j-1) and !check(mask,j-2))
        {
            cnt=min(cnt,fun(Set(reset(reset(mask,j),j-1),j-2)));
        }
    }
    return dp[mask]=cnt;
}
int main()
{
    memset(dp,-1,sizeof dp);
    char str[15];
    int t=sfi;
    while(t--)
    {
        scanf("%s",str);
        int x=0;
        for(int i=0; i<12; i++)if(str[i]=='o')x=Set(x,i);
        //cout<<x<<endl;
        //x=Set(reset(reset(x,0),1),2);
        //cout<<x<<endl;
        printf("%d\n",fun(x));
    }
}

