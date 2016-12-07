/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab No  : 11
Program : WAP to use if else condition
Date    : 7 Dec, 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
        printf("\nEnter first number : ");
        scanf("%d",&a);
        printf("\nEnter second number : ");
        scanf("%d",&b);
        printf("\nEnter third number : ");
        scanf("%d",&c);

        if(a>=b&&a>=c)
        {
                printf("\nThe largest number is first number.");
        }
        else if(b>=a&&b>=c)
        {
            printf("\nThe largest number is second number.");
        }
        else
        {
            printf("\nThe largest number is third number.");
        }

    getch();
return 0;
}
