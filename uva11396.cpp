#include<bits/stdc++.h>
using namespace std;
int color[305],vis[305];
vector<int>gr[305];
bool bfs(int src)
{
    vis[src]=1;
    color[src]=1;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<gr[u].size(); i++)
        {
            int v=gr[u][i];
            if(color[v]==color[u])return false;
            if(!vis[v])
            {
                vis[v]=1;
                q.push(v);
                color[v]=3-color[u];
            }
        }
    }
    return true;
}
void input(int n)
{
    for(int i=1; i<=n; i++)
    {
        color[i]=vis[i]=0;
        gr[i].clear();
    }
    int x,y;
    while(true)
    {
        cin>>x>>y;
        if(!x and !y)break;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
}
int main()
{
    int n;
    while(cin>>n and n)
    {
        input(n);
        if(bfs(1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
