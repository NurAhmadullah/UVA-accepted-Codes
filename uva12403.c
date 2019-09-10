#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int total,a,t,i;
    scanf("%d",&t);
    total=0;
    for(i=1;i<=t;i++)
    {
        scanf("%s",s);
        if((strcmp(s,"donate"))==0)
           {
               scanf("%d",&a);
               total+=a;
           }
           else if((strcmp(s,"report"))==0)
            printf("%d\n",total);
    }

}
