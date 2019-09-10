
#include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2,w,i,n,x,r,cn;
    char s1[100],s2[100],t1[100],t2[100];
    while(scanf("%s%s",s1,s2)){
            if(strcmp(s1,"0")==0&&strcmp(s2,"0")==0)
            return 0;
    n1=strlen(s1);
    n2=strlen(s2);
    w=0;
    for(i=n1-1;i>=0;i--){
        t1[w++]=s1[i];
    }
    t1[w]='\0';
    w=0;
    for(i=n2-1;i>=0;i--){
    t2[w++]=s2[i];
    }
    t2[w]='\0';
    if(n1>n2){
            n=n1;
        for(i=n2;i<=n1;i++){
            t2[i]='0';
        }
        t2[n1+1]='\0';
    }
    else{
        n=n2;
        for(i=n1;i<=n2;i++){
            t1[i]='0';
        }
        t1[n2+1]='\0';
    }
    x=0;
    cn=0;
    r=0;
    for(i=0;i<n;i++)
    {
        x=((t1[i]-'0')+(t2[i]-'0'))+r;
        if(x>9)
        {
            cn++;
            r=1;
        }
        else
            r=0;
    }
    if(cn==0)
        printf("No carry operation.\n");
    else if(cn==1)
        printf("%d carry operation.\n",cn);
    else
    printf("%d carry operations.\n",cn);

}
    return 0;
}
