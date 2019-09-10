#include<stdio.h>
int main()
{
    int n,i,j,t,m,x;
    int c[20]={0};
    scanf("%d",&t);
    for(j=1;j<=t;j++){
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=i;
        while(m)
        {
            x=m%10;
            c[x]++;
            m=m/10;
        }
    }
    for(i=0;i<10;i++){
        if(i!=0)printf(" ");
        printf("%d",c[i]);
        c[i]=0;
    }
    printf("\n");
    }
}
