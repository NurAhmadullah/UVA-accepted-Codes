#include<stdio.h>
int main()
{
    int d1,m1,y1,d2,m2,y2,d3,m3,y3,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d/ %d/ %d",&d2,&m2,&y2);
    scanf("%d/ %d/ %d",&d1,&m1,&y1);
    y3=0;
    if(d2<d1)
        m1=m1+1;
    if(m2<m1)
        y1=y1+1;
    if(y2<y1) printf("Case #%d: Invalid birth date\n",i);
    else{
    y3=y2-y1;
    if(y3>130) printf("Case #%d: Check birth date\n",i);
    else printf("Case #%d: %d\n",i,y3);
    }
    }
}

