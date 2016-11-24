/*
Student name: Bikal Koju
Roll no: 03
Subject: Programming fundamentals
Lab no: 06
Program: Write a c program to print number is positive, negative,or zero
Date: 24 Nov,2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int n;
        printf("\nEnter Any Number: ");
        scanf("%d",&n);

    if(n>0)
    {
        printf("\nNumber is positive.");
    }
    else if(n<0)
    {
        printf("\nNumber is negative.");
    }
    else if(n==0)
    {
        printf("\nNumber is zero.");
    }
    else
    {
        printf("Enter a correct number.");
    }

    getch();
return 0;
}
