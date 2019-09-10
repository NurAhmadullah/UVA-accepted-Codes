#include<bits/stdc++.h>
using namespace std;
int dx[]= {0,0,1,-1,   1,1,-1,-1};
int dy[]= {1,-1,0,0,   1,-1,1,-1};
#define sfi ({int x;scanf("%d",&x);x;})
#define sfl ({long long x;scanf("%I64d",&x);x;})
int main()
{
    char s[105][105];
    int ti=1;
    while(true)
    {
        int n=sfi,m=sfi;
        if(n==0 and m==0)break;
        memset(s,'.',sizeof s);
        for(int i=0; i<n; i++) cin>>s[i];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(s[i][j]=='.')
                {
                    int sum=0;
                    for(int k=0; k<8; k++)
                    {
                        if(s[i+dx[k]][j+dy[k]]=='*')sum++;
                    }
                    s[i][j]=sum+48;
                }
            }
        }
        if(ti>1)cout<<endl;
        cout<<"Field #"<<ti++<<":\n";
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }
}

