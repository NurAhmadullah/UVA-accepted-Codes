#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    long int a[10];
    while(scanf("%ld%ld%ld",&a[0],&a[1],&a[2])!=EOF){
        if(a[0]==0&&a[1]==0||a[2]==0)return 0;
        sort(a,a+3);
        if((double)sqrt(a[0]*a[0]+a[1]*a[1])==a[2])
            printf("right\n");
        else printf("wrong\n");
    }
}
