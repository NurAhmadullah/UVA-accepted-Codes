#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};

int d[1005][1005],R,C;
void BFS2D(int sx,int sy)
{
    int x,y;
    queue<pii>Q;
    Q.push(pii(sx,sy));
    d[sx][sy]=0;
    while(!Q.empty())
    {
        pii u=Q.front();
        Q.pop();
        for(int i=0; i<4; i++)
        {
            x=u.first+dx[i];
            y=u.second+dy[i];
            if(x>=0 and x<R and y>=0 and y<C and d[x][y]==-1)
            {
                Q.push(pii(x,y));
                d[x][y]=d[u.first][u.second]+1;
            }
        }
    }
}
int main()
{
    int x,y,ln,bn;
    while(cin>>R>>C)
    {
        if(R==0 and C==0)return 0;
        memset(d,-1,sizeof(d));
        cin>>ln;
        for(int i=0; i<ln; i++)
        {
            cin>>x>>bn;
            for(int j=0; j<bn; j++)
            {
                cin>>y;
                d[x][y]=0;
            }
        }
        cin>>x>>y;
        BFS2D(x,y);
        cin>>x>>y;
        cout<<d[x][y]<<endl;
    }
}


