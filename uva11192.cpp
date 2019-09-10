#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],r[10];
    int n,i,j,m;
    while(scanf("%d%*c",&m)!=EOF){
            if(m==0)return 0;
    gets(s);
    n=strlen(s);
    m=n/m;
    for(i=0;i<n;i++){
        r[i%m]=s[i];
        if(i%m==m-1){
            for(j=m-1;j>=0;j--)
                printf("%c",r[j]);
        }
    }
    printf("\n");
    }
}
