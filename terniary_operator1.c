/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab No  : 11
Program : WAP to check greater number using terniary operator
Date    : 7 Dec, 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
        printf("\nEnter first number : ");
        scanf("%d",&a);
        printf("\nEnter second number : ");
        scanf("%d",&b);

        (a>=b)?printf("\n%d is greater.",a):printf("\n%d is greater.",b);

    getch();
return 0;
}
