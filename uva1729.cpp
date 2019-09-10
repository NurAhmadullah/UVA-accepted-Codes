#include<bits/stdc++.h>
using namespace std;
#define sfi ({int x;scanf("%d",&x);x;})
map<char,int>mpp;
int main()
{
    string s;
    int t=sfi,ti=1;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        int mn=1000000;
        for(char c='a';c<='z';c++)
        {
            mn=mn<mpp[c]?mn:mpp[c];
        }
        printf("Case %d: %d\n",ti++,mn);
        mpp.clear();
    }
}

