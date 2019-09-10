#include<cstdio>
#include<cstring>
int fun(int n)
{
    if(n<10)
        return n;
    else
        return n/10+n%10;
}
int main()
{
    char s[20];
    int sum1,sum2,tt;
    scanf("%d%*c",&tt);
    while(tt--)
    {
        gets(s);
        sum1=sum2=0;
        for(int i=0;i<19;i++)
        {
            if(i==0 or i==2 or i==5 or i==7 or i==10 or i==12 or i==15 or i==17)
                sum1+=fun(2*(s[i]-48));
            else if(i==1 or i==3 or i==6 or i==8 or i==11 or i==13 or i==16 or i==18)
                sum2+=s[i]-48;
        }
        sum1=sum1+sum2;
        if(sum1%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
}
