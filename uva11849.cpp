#include<stdio.h>
long int a1[1000000],a2[1000000];
int main()
{
    long int n1,n2,c,i,j,k;
    while(scanf("%ld%ld",&n1,&n2)!=EOF){
            if(n1==0&&n2==0)return 0;
        for(i=0;i<n1;i++)
            scanf("%ld",&a1[i]);

        for(i=0;i<n2;i++)
            scanf("%ld",&a2[i]);
            c=j=k=0;
        while(j<n1&&k<n2){
            if(a1[j]==a2[k]){
                c++;
                j++;
                k++;
            }
            else if(a1[j]<a2[k])j++;
            else k++;
        }

        printf("%ld\n",c);
    }
}
