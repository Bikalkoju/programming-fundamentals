/*
Student Name: Bikal Koju
Subject: programming fundamentals
Roll:
Lab:
Program:write a c program to print largest no among three numbers using ternary operator
Date: 2016-10-24
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,largest;
        printf("Enter first number:");
        scanf("%d",&a);

        printf("Enter second number:");
        scanf("%d",&b);

        printf("Enter third number:");
        scanf("%d",&c);

        (a>=b && a>=c)? printf("\n%d is largest",a):
        (b>=a && b>=c)? printf("\n%d is largest",b):
        printf("\n%d is largest",c);


        getch();
    return 0;
}
