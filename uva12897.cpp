#include<bits/stdc++.h>
using namespace std;
#define sfi ({int x;scanf("%d",&x);x;})
map<int,char>mpp;
int main()
{
    int t=sfi;
    while(t--){
    for(int i=1;i<=26;i++)
    {
        mpp[i]='A'+i-1;
    }
    string s;
    char c1,c2;
    cin>>s;
    int n=sfi;
    for(int i=1;i<=n;i++)
    {
        cin>>c1>>c2;
        for(int j=1;j<=26;j++)
        {
            if(mpp[j]==c2)mpp[j]=c1;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='_')continue;
        int x=s[i]-64;
        s[i]=mpp[x];
    }
    cout<<s<<endl;
    }
}
