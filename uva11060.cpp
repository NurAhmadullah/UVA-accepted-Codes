#include<bits/stdc++.h>
using namespace std;
#define in cin
#define out cout
#define nwln '\n'

int ing[105],vis[105],n,m,inv,rslt[105];
vector<int>gr[105];
map<string,int>mep;///string er kaj korar somoy evabe maping kore nia graph a int input nibo...
map<int,string>lst;
void input()
{
    string x,y;
    for(int i=1; i<=n; i++)
    {
        in>>x;
        mep[x]=i;
        lst[i]=x;
        rslt[i]=ing[i]=vis[i]=0;
        gr[i].clear();
    }
    in>>m;
    for(int i=0; i<m; i++)
    {
        in>>x>>y;
        gr[mep[x]].push_back(mep[y]);///eivabe graph a input neya hoyese
        ing[mep[y]]++;
    }
}
void topsort()
{
    for(int i=1; i<=n; i++)
    {
        int j;
        for(j=1; j<=n; j++)
        {
            if(!ing[j] and !vis[j])
            {
                vis[j]=1;
                rslt[i]=j;
                for(int k=0; k<gr[j].size(); k++) ing[gr[j][k]]--;
                break;
            }
        }
    }
}
int main()
{
    int t=1;
    while(in>>n)
    {
        input();
        topsort();
        out<<"Case #"<<t++<<": Dilbert should drink beverages in this order: ";
        for(int i=1; i<n; i++) out<<lst[rslt[i]]<<' ';
        out<<lst[rslt[n]]<<'.';
        out<<nwln<<nwln;
    }
}
