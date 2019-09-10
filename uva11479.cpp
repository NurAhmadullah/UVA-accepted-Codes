#include<stdio.h>
int main()
{
    long int  a,b,c,max,i,t;
    scanf("%ld",&t);
    for(i=1;i<=t;i++){
        scanf("%ld%ld%ld",&a,&b,&c);
    if(a>b&&a>c) max=a;
    else if(b>a&&b>c) max=b;
    else max=c;

    if((a+b+c)<=(max+max)) printf("Case %ld: Invalid\n",i);
    else if(a<=0||b<=0||c<=0) printf("Case %ld: Invalid\n",i);
    else{

        if(a==b&&b==c&&c==a) printf("Case %ld: Equilateral\n",i);
        else if(a==b||b==c||c==a) printf("Case %ld: Isosceles\n",i);
        else printf("Case %ld: Scalene\n",i);

    }
    }
}
