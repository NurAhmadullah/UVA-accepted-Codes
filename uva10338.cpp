#include<stdio.h>
#include<string.h>
double fact(unsigned long long n)
{
    unsigned long long i;
    double r=1;
    if(n==0) return 1;
    else {
        for(i=1;i<=n;i++)
            r=r*i;
        return r;
    }
}
int main()
{
    char s[100];
    unsigned long long n,i,j,t,l;
    double p;
    int c[200]={0};
    scanf("%llu",&t);
    for(l=1;l<=t;l++){
    scanf("%s",s);
    n=strlen(s);
    p=fact(n);

    for(i='A';i<='Z';i++)
        for(j=0;j<n;j++)
            if(s[j]==i) c[i]++;


    for(i='A';i<='Z';i++){
        if(c[i]!=0) p=p/fact(c[i]);
        c[i]=0;
    }

    printf("Data set %llu: %.0lf\n",l,p);
    }
}
