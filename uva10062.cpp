#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j,a[100],b[100],t1,t2,ck=0;
    int d[130]={0};
    char s[1010];
    while(gets(s)){
    n=strlen(s);
    for(i=32;i<=128;i++){
        for(j=0;j<n;j++){
            if(i==s[j]){
                d[i]++;
            }
        }
    }
    j=0;
    for(i=32;i<=128;i++){
        if(d[i]!=0){
            a[j]=d[i];
            b[j]=i;
            j++;
        }
    }
    n=j;

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
        t1=a[i];
        t2=b[i];
        a[i]=a[j];
        b[i]=b[j];
        a[j]=t1;
        b[j]=t2;
        }
        else if(a[i]==a[j]&&b[i]<b[j]){
            t2=b[i];
            b[i]=b[j];
            b[j]=t2;
        }
        }

    if(ck!=0) printf("\n");
    ck=1;

    for(i=0;i<n;i++)
        printf("%d %d\n",b[i],a[i]);

    for(i=0;i<=130;i++)
        d[i]=0;
    }

}
