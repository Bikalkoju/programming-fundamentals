/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab No  : 09
Program : WAP to demonstrate the working of increment and decrement operator
Date    : 2nd Dec, 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
        printf("\nEnter any Number  : ");
        scanf("%d",&a);


        printf("\n\nPost increment is : %d",a++);
        printf("\nPre  increment is : %d",++a);

        printf("\n\nPost decrement is : %d",a--);
        printf("\nPre  decrement is : %d",--a);
    getch();
return 0;
}
