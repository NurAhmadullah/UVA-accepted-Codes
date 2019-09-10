#include<stdio.h>
int main()
{
    long int nm[2000]={0};
    long int n2,n3,n5,x2,x3,x5,t,tck;
    x2=x3=x5=2;
    n2=2;n3=3;n5=5;
    t=2;
    nm[1]=1;
    while(nm[1600]==0)
    {
        if(n2<n3&&n2<n5){
            nm[t++]=n2;
            n2=nm[x2++]*2;
        }
        else if(n3<n2&&n3<n5){
            nm[t++]=n3;
            n3=nm[x3++]*3;
        }
        else if(n5<n2&&n5<n3){
            nm[t++]=n5;
            n5=nm[x5++]*5;
        }



        if(n2==n3||n2==n5){
            n2=nm[x2++]*2;
        }
        else if(n3==n5){
            n3=nm[x3++]*3;
        }

    }

    printf("The 1500'th ugly number is %ld.\n",nm[1500]);

}

