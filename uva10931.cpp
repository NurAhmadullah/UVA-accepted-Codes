#include<stdio.h>
#include<string.h>
int main()
{
    long int n,i,j,ns,m,cn1;
    char s[200],r[200];
    while(scanf("%ld",&n)!=EOF){
            if(n==0)return 0;
    m=n;
    i=0;
    cn1=0;
    while(m!=0)
    {
        s[i]=(m%2+48);
        if(m%2==1) cn1++;
        m=m/2;
        i++;
    }
    s[i]='\0';
    ns=i;

    j=0;
    for(i=ns-1;i>=0;i--){

        r[j]=s[i];
        j++;
    }
    r[j]='\0';
    printf("The parity of %s is %ld (mod 2).\n",r,cn1);
    }
}
