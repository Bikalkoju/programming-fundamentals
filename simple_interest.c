/*
Student name: Bikal Koju
Roll no: 03
Subject: Programming fundamentals
Lab no: 03
Program: Write a c program to print simple interest.
Date: 18 Nov,2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
    float P,T,R,I;
        printf("\nInput Principal Amount:");
        scanf("%f",&P);
        printf("\nInput Time:");
        scanf("%f",&T);
        printf("\nInput Rate:");
        scanf("%f",&R);

        I=(P*T*R)/100;
        printf("\n\nSimple Interest Of Given Amount Is Rs%f",I);

    getch();
return 0;
}
