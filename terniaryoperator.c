/*
Student Name: Bikal Koju
Subject: programming fundamentals
Roll:
Lab:
Program:write a c program to take two input from user and print largest and smallest nos. using ternary operator
Date: 2016-10-24
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,largest,smallest;
        printf("Enter first number :");
        scanf("%d",&a);

        printf("\nEnter second number :");
        scanf("%d",&b);

        largest=(a>b)?a:b;
        smallest=(a<b)?a:b;

        printf("\n\nLargest number is:%d\n",largest);
        printf("Smallest number is:%d\n",smallest);



return 0;
}
