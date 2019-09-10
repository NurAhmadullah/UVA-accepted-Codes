#include<stdio.h>
int main()
{
    int ni[101],pi[101],t,i,j,l;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
    scanf("%d",&l);
    for(i=0;i<l;i++)
        scanf("%d",&ni[i]);

    for(i=0;i<l;i++)
        scanf("%d",&pi[i]);

    for(i=0;i<l;i++){
    if(ni[i]==0) printf(" ");

        else if(ni[i]==1){
        if(pi[i]==1) printf(".");
        else if(pi[i]==2) printf(",");
        else if(pi[i]==3) printf("?");
        else if(pi[i]==4) printf("\"");
    }
        else if(ni[i]==2){
        if(pi[i]==1) printf("a");
        else if(pi[i]==2) printf("b");
        else if(pi[i]==3) printf("c");
    }
        else if(ni[i]==3){
        if(pi[i]==1) printf("d");
        else if(pi[i]==2) printf("e");
        else if(pi[i]==3) printf("f");
    }
            else if(ni[i]==4){
        if(pi[i]==1) printf("g");
        else if(pi[i]==2) printf("h");
        else if(pi[i]==3) printf("i");
    }
            else if(ni[i]==5){
        if(pi[i]==1) printf("j");
        else if(pi[i]==2) printf("k");
        else if(pi[i]==3) printf("l");
    }
            else if(ni[i]==6){
        if(pi[i]==1) printf("m");
        else if(pi[i]==2) printf("n");
        else if(pi[i]==3) printf("o");
    }
            else if(ni[i]==7){
        if(pi[i]==1) printf("p");
        else if(pi[i]==2) printf("q");
        else if(pi[i]==3) printf("r");
        else if(pi[i]==4) printf("s");
    }
            else if(ni[i]==8){
        if(pi[i]==1) printf("t");
        else if(pi[i]==2) printf("u");
        else if(pi[i]==3) printf("v");
    }
            else if(ni[i]==9){
        if(pi[i]==1) printf("w");
        else if(pi[i]==2) printf("x");
        else if(pi[i]==3) printf("y");
        else if(pi[i]==4) printf("z");
    }
    }
    printf("\n");
    }
}
