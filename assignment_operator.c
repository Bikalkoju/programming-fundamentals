/*
Name : Bikal Koju
Roll No : 03
Subject : Programming Fundamentals
Lab No : 08
Program : WAP to print use assignment operator
Date : 30 Nov, 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
        printf("\nEnter First Number : ");
        scanf("%d",&a);
        printf("\nEnter Second Number : ");
        scanf("%d",&b);

        a+=b;
        printf("\n\n += %d",a);

        a-=b;
        printf("\n -= %d",a);

        a*=b;
        printf("\n *= %d",a);

        a/=b;
        printf("\n /= %d",a);


    getch();
return 0;
}
