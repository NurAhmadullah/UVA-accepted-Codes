#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef pair<long long,long long> pii;
vector<pii>gr[20005];
long long level[20005];
void dijkstra(long long src)
{
    priority_queue<pii,vector<pii>,greater<pii> > pq;
    pq.push(pii(0,src));
    level[src]=0;
    while(!pq.empty())
    {
        pii top=pq.top();
        pq.pop();
        long long u=top.second;
        long long d=top.first;
        for(long long i=0; i<gr[u].size(); i++)
        {
            long long v=gr[u][i].second;
            if(level[v]>d+gr[u][i].first)
            {
                level[v]=d+gr[u][i].first;
                pq.push(pii(level[v],v));
            }
        }
    }
}
void input(long long n)
{
    long long x,y,w;
    for(long long i=0; i<n; i++)
    {
        cin>>x>>y>>w;
        gr[x].push_back(pii(w,y));
        gr[y].push_back(pii(w,x));
    }
}
int main()
{
    long long n,e,s,t,tc;
    cin>>tc;
    for(long long ti=1; ti<=tc; ti++)
    {
        cin>>n>>e>>s>>t;
        for(long long i=0; i<=n; i++)
        {
            gr[i].clear();
            level[i]=10000000000000;
        }
        input(e);
        dijkstra(s);
        cout<<"Case #"<<ti<<": ";
        if(level[t]==10000000000000)
            cout<<"unreachable"<<endl;
        else
            cout<<level[t]<<endl;
    }
}

