#include<stdio.h>
#include<string.h>
int main()
{
    int i,tc,n,j,a[1000],b[1000],t1,t2,ck=0,x;
    int d[130]={0};
    char s[10000],st[1000][1000];

    scanf("%d\n",&tc);
    for(i=0;i<tc;i++){
        gets(st[i]);
        strcat(s,st[i]);
    }
    {
    n=strlen(s);              ///ascii value onujayi frequency nirnoy
    for(i=65;i<=90;i++){
        for(j=0;j<n;j++){
            if(s[j]>=97){
                s[j]=s[j]-32;
            }
            if(i==s[j]){
                d[i]++;
            }
        }
    }
    j=0;
    for(i=65;i<=122;i++){        ///sudhu valid array k neya
        if(d[i]!=0){
            a[j]=d[i];
            b[j]=i;
            j++;
        }
    }
    n=j;

    for(i=0;i<n-1;i++)            ///sorting
        for(j=i+1;j<n;j++){
        if(a[i]<a[j]){
        t1=a[i];
        t2=b[i];
        a[i]=a[j];
        b[i]=b[j];
        a[j]=t1;
        b[j]=t2;
        }
        else if(a[i]==a[j]&&b[i]>b[j]){
            t2=b[i];
            b[i]=b[j];
            b[j]=t2;
        }
        }

    if(ck!=0) printf("\n");
    ck=1;

    for(i=0;i<n;i++)
        printf("%c %d\n",b[i],a[i]);

    for(i=0;i<=130;i++)
        d[i]=0;
    }
}

