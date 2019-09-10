#include<bits/stdc++.h>
using namespace std;
#define sfi ({int a;scanf("%d",&a);a;})
int coin[]= {1,5,10,25,50};
int dpp[7500][6];
int fun(int s,int i)
{
    if(s==0)return 1;
    if(s<0 or i>=5) return 0;
    if(dpp[s][i]!=-1)return dpp[s][i];
    return dpp[s][i]= fun(s-coin[i],i)+fun(s,i+1);
}
int main()
{
    int s;
    memset(dpp,-1,sizeof dpp);
    fun(7490,0);
    while(scanf("%d",&s)!=EOF)
        printf("%d\n",dpp[s][0]);
}
