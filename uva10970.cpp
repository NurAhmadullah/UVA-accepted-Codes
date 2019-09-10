#include<stdio.h>
int main()
{
    int n1,n2,n;
    while(scanf("%d%d",&n1,&n2)!=EOF)
    {
        n=n1*n2-1;
        printf("%d\n",n);
    }
}
