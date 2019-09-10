#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define high 1000000

int cheek[high];

void sive()
{
 int i,j;
 for(i=0;i<high;i++) cheek[i]= 0;
 int sq = sqrt(high);
 for(i=4;i<=high;i+=2) cheek[i] = 1;
 for(i=3;i<=sq;i+=2){
  if(cheek[i]==0) {
   for(j=2*i;j<=high;j+=i) cheek[j]=1;
  }
 }
 cheek[1] = 1;
 cheek[0] = 1;
}

int main()
{
    int n,ck1,ck2,i,m,l,ck;
    sive();
    while(scanf("%d",&n)){
            if(n==0)
            return 0;
        l=n-1;
        m=1;
        ck=0;ck1=0;ck2=0;
        for(i=0;i<=n/2-1;i++){
                if(cheek[l]==0) ck1=1; else ck1=0;
                if(cheek[m]==0) ck2=1; else ck2=0;
                if(ck1==1&&ck2==1){
                    ck=1;
                    break;
                }
                l--;
                m++;
        }
        if(ck==1)
            printf("%d = %d + %d\n",n,m,l);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
