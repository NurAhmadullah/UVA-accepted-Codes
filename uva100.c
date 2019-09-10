#include<stdio.h>
int main()
{
    int a,b,c,n,h,i,t,ck;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        h=0;
        ck=0;
        if(a>b){
            t=a;
            a=b;
            b=t;
            ck=1;
        }
        for(i=a;i<=b;i++){
           c=1;
           n=i;
        while(1)
        {
            if(n==1)
                break;
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
            c++;
        }
        if(c>h)
            h=c;
        }
            if(ck==0) printf("%d %d %d\n",a,b,h);
            else printf("%d %d %d\n",b,a,h);
    }
}
