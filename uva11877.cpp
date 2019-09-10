#include<cstdio>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(!n)return 0;
        else printf("%d\n",n/2);
    }
}

