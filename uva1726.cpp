#include<bits/stdc++.h>
using namespace std;
#define sfi ({int x;scanf("%d",&x);x;})
#define sfc ({char x;scanf("%c",&x);x;})
struct three
{
    int d,s;
    char r;
}rrr[50005];
bool srt(three i,three j)
{
    if(i.d==j.d)
    {
        return i.r<j.r;
    }
    return i.d<j.d;
}
int main()
{
    int t=sfi;
    while(t--)
    {
        int q=sfi;
        for(int i=0;i<q;i++)
        {
            cin>>rrr[i].d>>rrr[i].s>>rrr[i].r;
        }
        sort(rrr,rrr+q,srt);

        int cnt=0;
        long long sum=0;
        for(int i=0;i<q;i++)
        {
            if(rrr[i].s==0 and rrr[i].r=='i')cnt++;
            if(rrr[i].s==1 and rrr[i].r=='c')sum+=cnt;
        }
        cout<<sum<<endl;
    }
}

