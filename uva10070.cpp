#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;
int main ()
{
    long b, Mod4, Mod100, Mod400, Mod15, Mod55, I, Len, a;
    char A[1000000];
    int print = 0;

    while (gets(A)){

        if ( print != 0 )
            printf("\n");
        print = 1;

        a = b = Mod4 = Mod100 = Mod400 = Mod15 = Mod55 = 0;

        Len = strlen (A);
        ///string na use korle 40 50 digit nibe na
        for (I=0; I< Len; I++) {

            Mod4 = ((Mod4 * 10) + (A[I]-'0')) % 4;
            Mod100 = ((Mod100 * 10) + (A[I]-'0')) % 100;
            Mod400 = ((Mod400 * 10) + (A[I]-'0')) % 400;
            Mod15 = ((Mod15 * 10) + (A[I]-'0')) % 15;
            Mod55 = ((Mod55 * 10) + (A[I]-'0')) % 55;
        }

        if ((Mod4==0 && Mod100!=0) || Mod400==0){
            printf("This is leap year.\n");
            a = 1;
            b = 1;
        }

        if (Mod15==0){
            printf("This is huluculu festival year.\n");
            b = 1;
        }

        if (a==1 && Mod55==0)
            printf("This is bulukulu festival year.\n");

        if (b==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}

