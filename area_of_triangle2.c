/*
Student Name: Bikal Koju
Roll No: 03
Subject: Programming Fundamentals
Lab No:02
Program: Write a c program to print area of triangle
Date:2016-11-16
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float s,a,b,c,area;
        printf("\t000000000000000000000000000000000000000000000000000000\n");
        printf("\n\t\tPut value of a:");
        scanf("%f",&a);
        printf("\n\t\tPut value of b:");
        scanf("%f",&b);
        printf("\n\t\tPut value of c:");
        scanf("%f",&c);
        printf("\n\t000000000000000000000000000000000000000000000000000000\n");

        s=(a+b+c)/2;
        area=(s*(s-a)*(s-b)*(s-c))/0.5;
        printf("\n\t\tArea of triangle is %f",area);
        printf("\n\n\t000000000000000000000000000000000000000000000000000000\n");
    getch();
return 0;
}
