#include<stdio.h>
#include<vector>
#include<queue>
#include<map>
#include<string.h>
#define high 10000
using namespace std;
int mx,day;
void bfs(int src,vector<int>gr[])
{
    mx=day=0;
    int m=0;
    queue<int>q;
    int cn[high]= {0};
    int visited[high]= {0};
    int parent[high]= {0};
    q.push(src);
    visited[src]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        m++;
        for(int i=0; i<gr[u].size(); i++)
        {
            int v=gr[u][i];
            if(!visited[v])
            {
                parent[v]=parent[u]+1;
                visited[v]=1;
                q.push(v);
                cn[parent[v]]++;
            }
        }
    }
    for(int i=0; i<=m; i++)
    {
        if(cn[i]>mx)
        {
            mx=cn[i];
            day=i;
        }
    }
    if(mx==0&&day==0)printf("0\n");
    else printf("%d %d\n",mx,day);
}
int main()
{
    int emp,n,f,tc,src;
    vector<int>gr[high];
    while(scanf("%d",&emp)!=EOF)
    {
        for(int i=0; i<emp; i++)
        {
            scanf("%d",&n);
            for(int j=0; j<n; j++)
            {
                scanf("%d",&f);
                gr[i].push_back(f);
            }
        }
        scanf("%d",&tc);
        for(int i=0; i<tc; i++)
        {
            scanf("%d",&src);
            bfs(src,gr);
        }
        for(int i=0; i<emp; i++)
            gr[i].clear();
    }
    return 0;
}
