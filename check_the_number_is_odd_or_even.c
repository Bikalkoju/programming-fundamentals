/*
Name : Bikal Koju
Roll No : 03
Subject : Programming Fundamentals
Lab No : 06
Program : WAP to check the number is odd or even
Date : 25 Nov, 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
   int n;
    printf("\nEnter any number : ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("\nThe number is even.");
    }

    else
    {
        printf("\nThe number is odd.");
    }

    getch();
return 0;
}
