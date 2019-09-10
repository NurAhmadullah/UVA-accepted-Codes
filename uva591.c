#include<stdio.h>
int main()
{
    int c,n,i,a[1000],sum,av,total,t=0;
    while(scanf("%d",&n)){
            if(n==0)
            return 0;
            t++;
    sum=0;
    total=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    av=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>av)
        {
            c=a[i]-av;
            total=total+c;
        }
    }
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,total);
}
    return 0;
}
