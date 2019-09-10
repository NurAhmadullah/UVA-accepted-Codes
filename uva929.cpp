#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> ppi;
#define mp make_pair

int dx[]= {0,0,1,-1},dy[]= {1,-1,0,0};
int cst[1000][1000],level[1000][1000],n,m;
void dijkstra()
{
    memset(level,15,sizeof level);//252645135
    // cout<<level[0][0]<<'\n';
    level[0][0]=cst[0][0];
    priority_queue<ppi,vector<ppi>,greater<ppi> > p;
    p.push(mp(cst[0][0],mp(0,0)));
    while(!p.empty())
    {
        ppi top=p.top();
        p.pop();
        int d=top.first;
        int tx=top.second.first;
        int ty=top.second.second;
        for(int i=0; i<4; i++)
        {
            int x=dx[i]+tx;
            int y=dy[i]+ty;
            if(x>=0 and x<n and y>=0 and y<m and (d+cst[x][y])<level[x][y])
            {
                level[x][y]=d+cst[x][y];
                p.push(mp(level[x][y],mp(x,y)));
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int ti=0; ti<t; ti++)
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>cst[i][j];
            }
        }
        dijkstra();
        cout<<level[n-1][m-1]<<'\n';
    }
}


