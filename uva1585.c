#include<stdio.h>
#include<string.h>
#define mx 100
int main()
{
    char str[mx];
    int i,j,k,n,len,cn,sum;
    scanf("%d",&n);
    for(k=1; k<=n; k++)
    {
        scanf("%s",str);
        len=strlen(str);
        cn=0;
        sum=0;
        for(i=0; i<len; i++)
        {
            if(str[i]=='O')
            {
                cn++;
                sum+=cn;
            }
            else
            {
                cn=0;
            }
        }
        printf("%d\n",sum);
    }
}
