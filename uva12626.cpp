#include<stdio.h>
#include<string.h>
int main()
{
    int t,cm,ca,cr,cg,ci,ct,i,j,n,h;
    char s[610];
    scanf("%d%*c",&t);
    for(j=1;j<=t;j++){
    gets(s);
    n=strlen(s);
    cm=ca=cr=cg=ci=ct=0;
    for(i=0;i<n;i++)
    {
             if(s[i]=='M') cm++;
        else if(s[i]=='A') ca++;
        else if(s[i]=='R') cr++;
        else if(s[i]=='G') cg++;
        else if(s[i]=='I') ci++;
        else if(s[i]=='T') ct++;
    }
    h=201;
    if(h>cm) h=cm;
    ca=ca/3;
    if(h>ca) h=ca;
    cr=cr/2;
    if(h>cr) h=cr;
    if(h>cg) h=cg;
    if(h>ci) h=ci;
    if(h>ct) h=ct;

    printf("%d\n",h);

}
}
