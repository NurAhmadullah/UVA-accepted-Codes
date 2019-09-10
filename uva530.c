#include <stdio.h>

long nCr(int n, int r) {
    long ans = 1;
    int i;
    for (i = 1; i < r+1; i++) {
        ans*= (n - r + i);
        ans/=i;
    }
    return ans;
}

int main(){
    long n,r,m;
   while(1){
       scanf("%ld %ld",&n,&r);
       if(n==0 && r==0)return 0;
       m=n-r;
       if(r<m)m=r;
       r=m;
        printf("%ld\n",nCr(n,r));
    }
    return 0;
}
