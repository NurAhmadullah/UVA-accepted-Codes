#include<stdio.h>
#include<algorithm>
using namespace std;
int a[2000000];
int main()
{
    int n,i;
    while(scanf("%d\n",&n)){
        if(n==0)
            return 0;
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        sort(a+0,a+n);
        for(i=0;i<n;i++){
        if(i!=0) printf(" ");
        printf("%d",a[i]);
        }
        printf("\n");
    }
}
