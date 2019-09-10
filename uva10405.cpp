#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
char a[1005],b[1005];
int dp[1005][1005];
bool visited[1005][1005];
int fn(int i,int j)
{
    if(a[i]=='\0' or b[j]=='\0')
        return 0;
    if(visited[i][j]) return dp[i][j];
    if(dp[i][j]==0)
    {
        if(a[i]==b[j])
            dp[i][j]=1+fn(i+1,j+1);
        else
            dp[i][j]=max(fn(i,j+1),fn(i+1,j));
    }
    visited[i][j]=true;
    return dp[i][j];
}
int main()
{
    while(gets(a))
    {
        gets(b);
        memset(dp,0,sizeof(dp));
        memset(visited,0,sizeof(visited));
        printf("%d\n",fn(0,0));
    }
}


