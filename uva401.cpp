#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,ck1,ck2,ck3,ck4,nck;
    char s[1000];
    char sck[50]="AAE3HHIIJLLJMMOOS2TTUUVVWWXXYYZ5112S3E5Z880OO0";
    nck=strlen(sck);
    while(gets(s)){
    start:
    n=strlen(s);
    if(s[n-1]==' '){
        s[n-1]='\0';
        goto start;
    }
    ck1=1;
    ck2=1;
    for(i=0;i<n;i++)
    {
        if(ck1==1){
        if(s[i]==s[n-1-i]){
            ck1=1;
        }
        else ck1=0;
        }
        if(ck2==1){
        for(j=0;j<nck;j++)
        {
            if(s[i]==sck[j]&&s[n-1-i]==sck[j+1]){
                    ck2=1;
                    break;
            }
            else ck2=0;
        }
        }
    }
    if(ck1==0&&ck2==0) printf("%s -- is not a palindrome.\n\n",s);
    if(ck1==1&&ck2==0) printf("%s -- is a regular palindrome.\n\n",s);
    if(ck1==0&&ck2==1) printf("%s -- is a mirrored string.\n\n",s);
    if(ck1==1&&ck2==1) printf("%s -- is a mirrored palindrome.\n\n",s);
}
}
