/*
Name     : Bikal Koju
Roll no. : 03
Subject  : Programming Fundamentals
Lab no.  : 07
Program  : Write a c program to enter any number and calculate its square root
Date     : 28 Nov, 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float a,sqrroot;
        printf("\nEnter any number : ");
        scanf("%f",&a);

        sqrroot=pow(a,0.5);

        printf("\nThe square of number is %.2f.",sqrroot);
    getch();
return 0;
}
