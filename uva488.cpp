#include<stdio.h>
int main()
{
    int i,a,j,k,n,f,t,l,c,c2=0;
    scanf("%d",&t);
    for(l=1;l<=t;l++){
    if(c2!=0) printf("\n");
    c2=1;
    scanf("%d%d",&n,&f);
    c=0;
    for(k=1;k<=f;k++){
        if(c!=0) printf("\n");
    c=1;
    a=0;
    for(i=1;i<n*2;i++)
    {
        if(i<=n){
        a++;
        for(j=0;j<a;j++)
                    printf("%d",a);
                printf("\n");}

        else{
        a--;
        for(j=0;j<a;j++)
                printf("%d",a);
            printf("\n");}
    }
    }
    }
}
