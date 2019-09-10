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
int main()
{
    int i;
    char s[1000],*p;
    char s1[100]=" `1234567890-=~!@#$%^&*()_+[]\\{}|\'\";:,./<>?";
    while(gets(s)){
    p=strtok(s,s1);
    i=0;
    while(p!=NULL)
    {
        i++;
        p=strtok(NULL,s1);
    }
    printf("%d\n",i);
    }
    return 0;
}
