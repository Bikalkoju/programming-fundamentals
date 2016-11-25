/*
Name : Bikal Koju
Roll No : 03
Subject : Programming Fundamentals
Lab No : 06
Program : WAP to print arithematic operation
Date : 25 Nov, 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,sum,sub,mul,div,mod;
        printf("\n\tEnter First Number:");
        scanf("%d",&a);
        printf("\n\tEnter Second Number:");
        scanf("%d",&b);

        sum=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;
        mod=a%b;

        printf("\n\n\tSum of two number is : %d",sum);
        printf("\n\tDifference of two number is : %d",sub);
        printf("\n\tProduct of two number is : %d",mul);
        printf("\n\tDivision of two number is : %d",div);
        printf("\n\tModulus of two number is : %d",mod);

    getch();
return 0;
}
