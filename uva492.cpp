#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;
char s[1000000];
void printv(char p[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%c",p[i]);
}
void printc(char p[],int n)
{
    int i;
    for(i=1;i<n;i++)
        printf("%c",p[i]);
    printf("%c",p[0]);
}
int chek(char c)
{
    if(c!='a'&&c!='A'
    &&c!='e'&&c!='E'
    &&c!='i'&&c!='I'
    &&c!='o'&&c!='O'
    &&c!='u'&&c!='U')
    return 0;
    else return 1;
}
int main()
{
    int i,n,ck,l,j;
    char p[100];
    while(gets(s)){
    l=strlen(s);
    j=0;
    for(i=0;i<l;i++)
    {
        if(isalpha(s[i])){
        p[j]=s[i];
        j++;
        }
        else{
        if(p[0]!='\0'){
        p[j]='\0';
        j=0;
        n=strlen(p);
        ck=chek(p[0]);
        if(ck==1) printv(p,n);
        else  printc(p,n);
        printf("ay");
        printf("%c",s[i]);
        p[0]='\0';
        }
        else
            printf("%c",s[i]);
    }
    }
    printf("\n");
    }
    return 0;
}
