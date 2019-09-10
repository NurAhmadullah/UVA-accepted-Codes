#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int dx[]= {1,1,2,2,-1,-1,-2,-2};
int dy[]= {2,-2,1,-1,2,-2,1,-1};

int vis[10][10],level[10][10];
void dfs(int sx,int sy)
{
    int x,y;
    queue<pii>q;
    q.push(pii(sx,sy));
    vis[sx][sy]=1;
    level[sx][sy]=0;
    while(!q.empty())
    {
        pii u=q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            x=u.first+dx[i];
            y=u.second+dy[i];
            if(!vis[x][y] and x>=0 and x<8 and y>=0 and y<8)
            {
                vis[x][y]=1;
                level[x][y]=level[u.first][u.second]+1;
                q.push(pii(x,y));
            }
        }
    }
}
int main()
{
    char s1,d1;
    int s2,d2;
    while(scanf("%c%d%*c%c%d%*c",&s1,&s2,&d1,&d2)!=EOF)
    {
        memset(vis,0,sizeof vis);
        memset(level,0,sizeof level);
        dfs(s1-'a',s2-1);
        printf("To get from %c%d to %c%d takes %d knight moves.\n",s1,s2,d1,d2,level[d1-'a'][d2-1]);
    }
}

