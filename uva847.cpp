#include<cstdio>
long long n,p;
int main()
{
    while(scanf("%lld",&n)!=EOF)
    {
        bool stan=1;///prothom bar stan er chal
        p=1;
        while(p<n)
        {
            if(stan)p*=9;///stan er chal
            else p*=2;   ///eita kivabe ollie'r chal bujhinai...
            stan=!stan;
        }
        if(!stan) printf("Stan wins.\n");///stan ses chal dise bole value 0;
        else printf("Ollie wins.\n");
    }
}

