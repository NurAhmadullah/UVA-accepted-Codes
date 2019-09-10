#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n,t,i,j;
    scanf("%d%*c",&t);
    j=0;
    while(j<t){
    if(s[0]=='\0')j++;
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++){
         if(s[i]=='1')printf("I");
    else if(s[i]=='2') printf("Z");
    else if(s[i]=='3') printf("E");
    else if(s[i]=='4') printf("A");
    else if(s[i]=='5') printf("S");
    else if(s[i]=='6') printf("G");
    else if(s[i]=='7') printf("T");
    else if(s[i]=='8') printf("B");
    else if(s[i]=='9') printf("P");
    else if(s[i]=='0') printf("O");
    else printf("%c",s[i]);
    }
    printf("\n");
    }
}
