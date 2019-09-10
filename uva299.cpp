#include<stdio.h>
int sortt(int a[],int n)
{

    int i,j,t,c=0;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
        c=c+1;
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
    return c;
}
int main()
{
    int n,m,i,j,c,a[100];
    scanf("%d",&n);
    {
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
        }
        c=sortt(a,m);
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    }

    return 0;
}
