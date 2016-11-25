/*
Name : Bikal Koju
Roll No : 03
Subject : Programming Fundamentals
Lab No : 06
Program : WAP to enter P,T,R and calculate compound interest
Date : 25 Nov, 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float P,T,R,CI;
        printf("Input Principal amount: ");
        scanf("%f",&P);
        printf("Input Time: ");
        scanf("%f",&T);
        printf("Input Rate: ");
        scanf("%f",&R);

        CI=((P*pow(1+(R/100),T))-1);

        printf("Compound intrest is : %f",CI);

    getch();
return 0;
}
