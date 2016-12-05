/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab No  : 10
Program : Write a c program to use of relational operator
          a)take number from user
          b)Check if the value lies between them: >60&&<80 then print first division
Date    : 5 Dec, 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float a;
        printf("\n\t*****=====*****=====***** WELCOME *****=====*****=====*****\n");
        printf("\n\t\tEnter percentage obtained : ");
        scanf("%f",&a);

        if(a>=35)
        {
        printf("\n\t\tCONGRATS! You have passed with third division.");
        if(a>=45)
        {
        printf("\n\t\tCONGRATS! You have passed with second division.");
        if(a>=60)
        {
        printf("\n\t\tCONGRATS! You have passed with first division.");
        if(a>=80)
        {
        printf("\n\t\tCONGRATS! You have passed with distinction.");
        }
        }
        }
        }
    getch();
return 0;
}
