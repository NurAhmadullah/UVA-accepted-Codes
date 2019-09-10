#include<stdio.h>
int main()
{
    int i,j,s,t,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&x,&y);
        s=0;
        for(j=x;j<=y;j++){
            if(j%2==0)
            continue;
            else
                s=s+j;
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
