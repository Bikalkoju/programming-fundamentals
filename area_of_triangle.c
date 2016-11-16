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
    float base,height,area;
        printf("\t000000000000000000000000000000000000000000000000000000\n");
        printf("\n\t\tPut value of base:");
        scanf("%f",&base);
        printf("\n\t\tPut value of heigth:");
        scanf("%f",&height);
        printf("\n\t000000000000000000000000000000000000000000000000000000\n");

        area=(base*height)/2;
        printf("\n\t\tArea of triangle is %f",area);
        printf("\n\n\t000000000000000000000000000000000000000000000000000000\n");
    getch();
return 0;
}
