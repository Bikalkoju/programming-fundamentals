/*
Student Name: Bikal Koju
Roll No: 03
Subject: Programming Fundamentals
Lab No:02
Program: Write a c program to print sum of two numbers,asked from users.
Date:2016-11-16
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,sum;
        printf("*****===============================*****");
        printf("\n\tEnter First Number:");
        scanf("%d",&a);
        printf("\n\n\tEnter Second Number:");
        scanf("%d",&b);

        sum=a+b;
        printf("\n\n\t=> The sum of two no. is %d",sum);
        printf("\n*****===============================*****");
    getch();
return 0;
}
