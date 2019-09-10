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

int main()
{
    char *p;
    int n,i,j;
    while(gets(s))
    {
        p=strtok(s," ");
        j=0;
        while(p!=NULL)
        {
            n=strlen(p);
            if(j!=0)
            printf(" ");
            for(i=n-1; i>=0; i--)
            {
                printf("%c",p[i]);
            }
            j++;
            p=strtok(NULL," ");
        }
        printf("\n");
    }
    return 0;
}
