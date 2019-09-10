#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s1[100],s2[100];
    int n1,n2,r,a[100],i,l1,l2,t1,t2;
    while(gets(s1))
    {
        gets(s2);
        n1=0;
        l1=strlen(s1);
        for(i=0; i<l1; i++)
        {
            if(isupper(s1[i]))
            {
                n1+=(s1[i]-64);
            }
            else if(islower(s1[i]))
            {
                n1+=(s1[i]-96);
            }
        }
        n2=0;
        l2=strlen(s2);
        for(i=0; i<l2; i++)
        {
            if(isupper(s2[i]))
            {
                n2+=(s2[i]-64);
            }
            else if(islower(s2[i]))
            {
                n2+=(s2[i]-96);
            }
        }
start1:
        i=0;
        t1=0;
        while(n1>0)
        {
            a[i]=n1%10;
            n1=n1/10;
            t1+=a[i];
            i++;
        }
        i=0;
        if(t1>9)
        {
            n1=t1;
            goto start1;
        }
start2:
        i=0;
        t2=0;
        while(n2>0)
        {
            a[i]=n2%10;
            n2=n2/10;
            t2+=a[i];
            i++;
        }
        if(t2>9)
        {
            n2=t2;
            goto start2;
        }
        if(t2>t1)
            printf("%.2f %%\n",100*(float)t1/(float)t2);
        else
            printf("%.2f %%\n",100*(float)t2/(float)t1);
    }
    return 0;
}
