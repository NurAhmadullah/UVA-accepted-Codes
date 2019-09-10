#include<stdio.h>
int main()
{
    int h,m,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d:%d",&h,&m);
    h=12-h;
    if(h==0)h=12;
    if(m>0){
        h=h-1;
        if(h==0)h=12;
        m=60-m;
    }
    if(h<10)printf("0");
    printf("%d:",h);
    if(m<10)printf("0");
    printf("%d\n",m);
    }
}
