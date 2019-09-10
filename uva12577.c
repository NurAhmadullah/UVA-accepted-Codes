#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i=1;
    while(gets(s))
    {
        if((strcmp(s,"*"))==0)
            return 0;
        if((strcmp(s,"Hajj"))==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
            else if((strcmp(s,"Umrah"))==0)
                printf("Case %d: Hajj-e-Asghar\n",i);
            i++;
    }
}
