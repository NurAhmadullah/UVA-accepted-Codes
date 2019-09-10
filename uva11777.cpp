#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long int a[100],i,j,n,to,av;
    scanf("%ld",&n);
    for(j=1; j<=n; j++)
    {

        for(i=0; i<7; i++)
            scanf("%ld",&a[i]);

        sort(a+4,a+7);

        av=(a[5]+a[6])/2;
        to=a[0]+a[1]+a[2]+a[3]+av;

        if(to>=90) printf("Case %ld: A\n",j);
        else if(to>= 80 && to< 90) printf("Case %ld: B\n",j);
        else if(to>= 70 && to< 80) printf("Case %ld: C\n",j);
        else if(to>= 60 && to< 70) printf("Case %ld: D\n",j);
        else if(to< 60) printf("Case %ld: F\n",j);
    }
    return 0;
}
