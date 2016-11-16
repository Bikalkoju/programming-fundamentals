/*
Student Name: Bikal Koju
Roll No: 03
Subject: Programming Fundamentals
Lab No:02
Program: Write a c program to print product and sum of three numbers,asked from user.
Date:2016-11-16
*/

#include<stdio.h>
#include<conio.h>

int main()
{
   int a,b,c,sum,mul;
        printf("000000000000000000000000000000000000000000000000000000\n");
        printf("\n\tEnter First Number:");
        scanf("%d",&a);
        printf("\n\t\tEnter Second Number:");
        scanf("%d",&b);
        printf("\n\t\t\tEnter Third Number:");
        scanf("%d",&c);
        printf("\n\t\t\t0000000000000000000000000000000000000000000000000000000\n");

        sum=a+b+c;
        mul=a*b*c;

        printf("\n\t\t\t\t=> Sum of three number are %d",sum);
        printf("\n\n\t\t\t\t\t=> product of three number are %d",mul);
        printf("\n\n\t\t\t\t\t0000000000000000000000000000000000000000\n");

    getch();
return 0;
}
