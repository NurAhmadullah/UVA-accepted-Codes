#include<stdio.h>
int main()
{
  int n,b,t,m,cd,ch,h,i,p;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
      scanf("%d",&n);
      m=n;
      p=n;
      cd=0;
      while(m)
      {
          b=m%2;
          m=m/2;
          if(b==1) cd++;
      }
      ch=0;
      while(p)
      {
          h=p%10;
          p=p/10;
          while(h)
          {
              b=h%2;
              h=h/2;
              if(b==1) ch++;
          }
      }
      printf("%d %d\n",cd,ch);
  }

}
