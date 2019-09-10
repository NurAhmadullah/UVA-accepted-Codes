#include<bits/stdc++.h>
using namespace std;
struct sss
{
    string s;
    int x,y,z;
}rrr[8];
int main()
{
    rrr[1].s="BCG",rrr[1].x=1,rrr[1].y=6,rrr[1].z=8;
    rrr[2].s="BGC",rrr[2].x=1,rrr[2].y=5,rrr[2].z=9;
    rrr[3].s="CBG",rrr[3].x=3,rrr[3].y=4,rrr[3].z=8;
    rrr[4].s="CGB",rrr[4].x=3,rrr[4].y=5,rrr[4].z=7;
    rrr[5].s="GBC",rrr[5].x=2,rrr[5].y=4,rrr[5].z=9;
    rrr[6].s="GCB",rrr[6].x=2,rrr[6].y=6,rrr[6].z=7;
    int xxx[11];

    while(cin>>xxx[1])
    {
        long long sum=xxx[1],sum2=0;
        for(int i=2; i<=9; i++)
        {
            cin>>xxx[i];
            sum+=xxx[i];
        }
        long long mxs=0,pos;
        for(int i=1;i<=6;i++)
        {
            int x=rrr[i].x;
            int y=rrr[i].y;
            int z=rrr[i].z;
            sum2=xxx[x]+xxx[y]+xxx[z];
            if(mxs<sum2)
            {
                pos=i;
                mxs=sum2;
            }
        }
        cout<<rrr[pos].s<<' '<<sum-mxs<<endl;
    }
}





