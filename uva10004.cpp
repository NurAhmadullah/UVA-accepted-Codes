#include<bits/stdc++.h>
using namespace std;
#define MAX 205

int n,e;
int part[MAX],visited[MAX];
vector< int > gr[MAX];
bool bfs()
{
    int i, u, v, src=0;
    for(int i=0; i<n; i++)
    {
        part[i]=0;
        visited[i]=0;
    }
    queue< int > q;
    q.push(src);
    part[src] = 1;
    visited[src] = 1;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(i=0; i < gr[u].size(); i++)
        {
            v = gr[u][i];
            if(part[u] == part[v])
            {
                return false;
            }
            if(!visited[v])
            {
                visited[v] = 1;
                part[v] = 3 - part[u];
                q.push(v);
            }
        }
    }
    return true;
}
int main()
{
    int x, y;
    while(cin>>n and n)
    {
        cin>>e;
        for(int i=0; i<e; i++)
        {
            scanf("%d %d", &x, &y);
            gr[x].push_back(y);
            gr[y].push_back(x);
        }
        if(bfs())
        {
            printf("BICOLORABLE.\n");
        }
        else
        {
            printf("NOT BICOLORABLE.\n");
        }
        for(int i=0;i<=n;i++)gr[i].clear();
    }
}
