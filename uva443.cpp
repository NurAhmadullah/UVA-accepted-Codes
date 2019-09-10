#include<stdio.h>
int main()
{
    long int nm[10000]={0};
    long int n2,n3,n5,n7,x2,x3,x5,x7,t,tck;
    x2=x3=x5=x7=2;
    n2=2;n3=3;n5=5;n7=7;
    t=2;
    nm[1]=1;
    while(nm[6000]==0)
    {
        if(n2<n3&&n2<n5&&n2<n7){
            nm[t++]=n2;
            n2=nm[x2++]*2;
        }
        else if(n3<n2&&n3<n5&&n3<n7){
            nm[t++]=n3;
            n3=nm[x3++]*3;
        }
        else if(n5<n2&&n5<n3&&n5<n7){
            nm[t++]=n5;
            n5=nm[x5++]*5;
        }
        else if(n7<n2&&n7<n3&&n7<n5){
            nm[t++]=n7;
            n7=nm[x7++]*7;
        }


        if(n2==n3||n2==n5||n2==n7){
            n2=nm[x2++]*2;
        }
        else if(n3==n5||n3==n7){
            n3=nm[x3++]*3;
        }
        else if(n5==n7){
            n5=nm[x5++]*5;
        }
    }
    while(scanf("%d",&t)!=EOF){
            if(t==0)return 0;
    tck=t%100;
    if(tck==1||tck==21||tck==31||tck==41||tck==51||tck==61||tck==71||tck==81||tck==91)
    printf("The %ldst humble number is %ld.\n",t,nm[t]);
    else if(tck==2||tck==22||tck==32||tck==42||tck==52||tck==62||tck==72||tck==82||tck==92)
    printf("The %ldnd humble number is %ld.\n",t,nm[t]);
    else if(tck==3||tck==23||tck==33||tck==43||tck==53||tck==63||tck==73||tck==83||tck==93)
    printf("The %ldrd humble number is %ld.\n",t,nm[t]);
    else printf("The %ldth humble number is %ld.\n",t,nm[t]);

    }
}
