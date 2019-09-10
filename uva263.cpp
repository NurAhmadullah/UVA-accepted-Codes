#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
char s[1000],r[1000];
int main()
{
    long int n1,n2,i,j,k,l,d1,cn,ck,lr;
    long int ar[1000];
    while(1){
            gets(s);
            if(strcmp(s,"0")==0) return 0;
    printf("Original number was %s\n",s);
    cn=1;
    lr=ck=0;
    while(1){
    l=strlen(s);
    sort(s,s+l);
    j=0;
    for(i=l-1;i>=0;i--) ///reverse
        r[i]=s[j++];
    r[j]='\0';

    n1=atol(s);
    n2=atol(r);
    d1=n2-n1;
    ar[lr++]=d1;
    for(k=0;k<lr-1;k++){
       if(d1==ar[k]) ck=1;
    }

    if(ck==0){
        cn++;
        printf("%ld - %ld = %ld\n",n2,n1,d1);
    }
    if(ck==1){
        printf("%ld - %ld = %ld\n",n2,n1,d1);
        printf("Chain length %ld\n\n",cn);
        break;
    }
    sprintf(s,"%ld",d1);
    }
}
return 0;
}
