#include<stdio.h>

int main()
{
    long int d,n;
    long int s[500],i;

    while(scanf("%ld",&d)!=EOF){
        if(d<0) return 0;
    if(d==0) printf("0");
    else{
    i=0;
    while(d!=0)
    {
       s[i]=d%3;
       d=d/3;
       i++;
    }
    n=i;

        for(i=n-1;i>=0;i--)
        printf("%ld",s[i]);
        }
        printf("\n");

    }
}
