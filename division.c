/*
Student Name: Bikal Koju
Roll No: 03
Subject: Programming Fundamentals
Lab No:02
Program: Write a c program to print division of two numbers,asked from users.
Date:2016-11-16
*/

#include<stdio.h>
#include<conio.h>

int main()
{
     float a,b,div;
        printf("*****===============================*****");
        printf("\n\tEnter First Number:");
        scanf("%f",&a);
        printf("\n\n\tEnter Second Number:");
        scanf("%f",&b);

        div=a/b;
        printf("\n\n\t=> The division of two no. is %f",div);
        printf("\n*****===============================*****");
    getch();
return 0;
}
