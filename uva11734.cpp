#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],as1[100],as2[100];
    int n1,n2,i,j,ck,t,k=1;
    scanf("%d%*c",&t);
    for(k=1;k<=t;k++){
    gets(s1);
    gets(s2);
    n1=strlen(s1);
    n2=strlen(s2);
    if(strcmp(s1,s2)==0){
            printf("Case %d: Yes\n",k);
            continue;
    }
    else{
            j=0;
        for(i=0;i<n1;i++){
            if(s1[i]!=' ')
                as1[j++]=s1[i];
        }
        as1[j]='\0';
        j=0;
        for(i=0;i<n2;i++){
            if(s2[i]!=' ')
                as2[j++]=s2[i];
        }
        as2[j]='\0';
    }
    if(strcmp(as1,as2)==0) printf("Case %d: Output Format Error\n",k);
    else printf("Case %d: Wrong Answer\n",k);
}
}
