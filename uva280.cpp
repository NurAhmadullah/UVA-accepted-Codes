
#include<bits/stdc++.h>
using namespace std;
vector<int>gr[105];
int vis[105],cn,ck;
void dfs(int s)
{
    if(vis[s])return;
    if(ck)
    {
        vis[s]=1;
        cn++;
    }
    ck=1;
    int sz=gr[s].size();
    for(int i=0; i<sz; i++)dfs(gr[s][i]);
}
int main()
{
    int n,st,x,m,s;
    while(cin>>n and n)
    {
        while(cin>>st and st)
        {
            while(cin>>x and x)
            {
                gr[st].push_back(x);
            }
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>s;
            ck=cn=0;
            memset(vis,0,sizeof vis);
            dfs(s);
            cout<<n-cn;
            for(int j=1; j<=n; j++)if(vis[j]==0)cout<<' '<<j;
            cout<<'\n';
        }
        for(int i=0; i<=n; i++)gr[i].clear();
    }
}
