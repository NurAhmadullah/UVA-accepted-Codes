#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    int ck[12]= {0};
    char s[100];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) return 0;
        gets(s);
        if(strcmp(s,"too high")==0)
        {
            for(i=n; i<=10; i++)
                ck[i]=1;
        }
        if(strcmp(s,"too low")==0)
        {
            for(i=n; i>=1; i--)
                ck[i]=1;
        }
        if(strcmp(s,"right on")==0)
        {
            if(ck[n]==1) printf("Stan is dishonest\n");
            else printf("Stan may be honest\n");
            for(i=1; i<=10; i++)
                ck[i]=0;
        }
    }
}

