/*
Name     : Bikal Koju
Roll no. : 03
Subject  : Programming Fundamentals
Lab no.  : 07
Program  : Write a c program to use relational operation
Date     : 28 Nov, 2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
        printf("\nEnter First Number : ");
        scanf("%d",&a);
        printf("\nEnter Second Number : ");
        scanf("%d",&b);

        a==b;
        a>b;
        a<b;
        a!=b;
        a>=b;
        a<=b;

        printf("\nIn use of == : %d",a==b);
        printf("\nIn use of > : %d",a>b);
        printf("\nIn use of < : %d",a<b);
        printf("\nIn use of != : %d",a!=b);
        printf("\nIn use of >= : %d",a>=b);
        printf("\nIn use of <= : %d",a<=b);
    getch();
return 0;
}
