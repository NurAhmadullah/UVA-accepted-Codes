#include<stdio.h>

int main()
{
    int n,j,ck,d;
    int nm[3050],ab[3050];

    while(scanf("%d",&n)!=EOF)
    {
        ck=0;
        for(j=0; j<n; j++)
        {
            scanf("%d",&nm[j]);
            ab[j]=0;
        }
        for(j=0;j<n-1;j++){
            d=nm[j]-nm[j+1];
            if(d<0) d=d*-1;
            ab[d]=1;
        }
        for(j=1;j<n;j++){
            if(ab[j]!=1){
                ck=1;
                break;
            }
        }
        if(ck==0) printf("Jolly\n");
            else printf("Not jolly\n");
    }
    return 0;
}
