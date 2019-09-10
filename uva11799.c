#include<stdio.h>
int main()
{
    int t,n,i,j,h,a[100000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        h=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(h<a[j])
            h=a[j];
        }
        printf("Case %d: %d\n",i,h);
    }

}
