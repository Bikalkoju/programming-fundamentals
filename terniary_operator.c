/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab No  : 11
Program : WAP to check no is odd or even using terniary operator
Date    : 7 Dec, 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
        printf("\nEnter any number : ");
        scanf("%d",&a);

        (a%2==0)?printf("\nNumber %d is even.",a):printf("\nNumber %d is odd.",a);

    getch();
return 0;
}
