/*
Name     : Bikal Koju
Roll no. : 03
Subject  : Programming Fundamentals
Lab no.  : 07
Program  : Write a c program to enter any number and calculate its square
Date     : 28 Nov, 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int a,sqr;
        printf("\nEnter any number : ");
        scanf("%d",&a);

        sqr=pow(a,2);

        printf("\nThe square of number is %d.",sqr);
    getch();
return 0;
}
