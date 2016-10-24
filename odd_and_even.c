/*
Student Name: Bikal Koju
Subject: programming fundamentals
Roll:
Lab:
Program:write a c program to check a number is ODD or EVEN using terniary operator
Date: 2016-10-24
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
        printf("Enter first number:");
        scanf("%d",&number);

        (number%2==0)? printf("\nThe number %d is even",number):printf("\nThe number %d is odd",number);

        getch();
return 0;
}
