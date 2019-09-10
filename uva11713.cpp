#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    int n1,n2,i,ck,t,j;
    scanf("%d%*c",&t);
    for(j=1;j<=t;j++){
    gets(s1);
    gets(s2);
    n1=strlen(s1);
    n2=strlen(s2);
    ck=0;
    if(n1!=n2){
        printf("No\n");
        continue;
    }
    else {
    for(i=0;i<n1;i++){
        if(s1[i]==s2[i])continue;
        else {
            if((s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
               &&(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'))continue;
            else{
                ck=1;
            break;
            }
        }
    }
    }
    if(ck==0) printf("Yes\n");
    else printf("No\n");
    }
}
