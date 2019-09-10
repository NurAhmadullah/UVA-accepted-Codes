#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int pn,d,t,i;
    double sum;
    char s[10],str[10];
    scanf("%d%*c",&t);
    for(i=1; i<=t; i++)
    {
        gets(s);
        str[0]=s[4];
        str[1]=s[5];
        str[2]=s[6];
        str[3]=s[7];
        str[4]='\0';
        pn=atoi(str);

        sum=0;
        sum=(s[0]-65)*pow(26,2);
        sum=sum+(s[1]-65)*pow(26,1);
        sum=sum+(s[2]-65)*pow(26,0);

        d=sum-pn;
        if(d<0) d=d*-1;
        if(d<=100) printf("nice\n");
        else printf("not nice\n");
    }
}
