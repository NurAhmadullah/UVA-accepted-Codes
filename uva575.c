#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,j,n,tem;
    long int sum;
    while(gets(s)){
            if(strcmp(s,"0")==0)return 0;
    n=strlen(s);
    sum=0;
    j=1;
    while(n>0)
    {
        i=s[n-1]-48;
        tem=i*(pow(2,j)-1);
        sum=sum+tem;
        j++;
        n--;
    }
    printf("%ld\n",sum);
    }
}
