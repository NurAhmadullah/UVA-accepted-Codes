#include<bits/stdc++.h>
using namespace std;
#define sfi ({int x;scanf("%d",&x);x;})
#define sfl ({long long x;scanf("%I64d",&x);x;})
map<string,int>mpp;
int main()
{
    mpp["FRI"]=1;
    mpp["SAT"]=2;
    mpp["SUN"]=3;
    mpp["MON"]=4;
    mpp["TUE"]=5;
    mpp["WED"]=6;
    mpp["THU"]=0;

    mpp["JAN"]=31;
    mpp["FEB"]=28;
    mpp["MAR"]=31;
    mpp["APR"]=30;
    mpp["MAY"]=31;
    mpp["JUN"]=30;
    mpp["JUL"]=31;
    mpp["AUG"]=31;
    mpp["SEP"]=30;
    mpp["OCT"]=31;
    mpp["NOV"]=30;
    mpp["DEC"]=31;


    string s1,s2;
    int t=sfi;
    while(t--)
    {
        cin>>s1>>s2;
        int m=mpp[s1],d=mpp[s2],cnt=0;

        for(int i=0; i<m; i++)
        {
            if(d==1 or d==2)cnt++;
            d++;
            d%=7;
        }
        cout<<cnt<<endl;
    }
}

