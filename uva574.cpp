#include<bits/stdc++.h>
using namespace std;
map<vector<int>,int> rss;
vector<int> v,s;
int ttl,n,tkn[13],rrr[13];
void fun(int st,int sum)
{
    if(sum==ttl)
    {
        s=v;
        sort(s.begin(),s.end());
        if(rss[s]==1)return;
        rss[s]=1;
        cout<<v[0];
        for(int i=1; i<v.size(); i++)cout<<'+'<<v[i];
        cout<<'\n';
    }
    if(sum>ttl)return;
    for(int i=st; i<n; i++)
    {
        v.push_back(rrr[i]);
        fun(i+1,sum+rrr[i]);
        v.pop_back();
    }
    return;
}
int main()
{
    while(true)
    {
        cin>>ttl>>n;
        if(ttl==0 and n==0)return 0;
        for(int i=0; i<n; i++)cin>>rrr[i];
        cout<<"Sums of "<<ttl<<":\n";
        rss.clear();
        fun(0,0);
        if(rss.size()==0)
            cout<<"NONE\n";
    }
}
