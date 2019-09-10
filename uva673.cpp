#include<stdio.h>
#include<string.h>
int main()
{
    long int i,n,c1,c3,ck,t,j;
    char s[10000];
    scanf("%ld%*c",&t);
    for(j=1; j<=t; j++)
    {
        gets(s);
        n=strlen(s);
        ck=c1=c3=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='(') c1++;
            else if(s[i]==')') c1--;
            else if(s[i]=='[') c3++;
            else if(s[i]==']') c3--;

            if((s[i]=='('&&s[i+1]==']')||(s[i]=='['&&s[i+1]==')'))
            {
                ck=1;
                break;
            }

            if(c1<0||c3<0)
            {
                ck=1;
                break;
            }
        }
        if(ck==0&&c1==0&&c3==0) printf("Yes\n");
        else printf("No\n");
    }
}
