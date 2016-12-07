/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab No  : 10
Program : WAP to use if condition
Date    : 7 Dec, 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
        printf("\nEnter any number : ");
        scanf("%d",&a);

        if(a>=35)
        {
            printf("\nYou have passed.\n");

            if(a>=80)
            {
                printf("\nYou passed with distinction.");
            }
            if(a>=60)
            {
                printf("\nYou passed with first division.");
            }
            if(a>=45)
            {
                printf("\nYou passed with second division.");
            }
            if(a>=35)
            {
                printf("\nYou passed with third division.");
            }
        }

        if(a<35)
        {
            printf("\nYou have failed.");
        }
    getch();
return 0;
}
