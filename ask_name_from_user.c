/*
Student Name: Bikal Koju
Roll No: 3
Subject:Programming fundamentals
Lab No: 01
Program: Write a c program to print your name, ask from user
Date:2016-11-14
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char name[50];
        printf("\t**********=============================================**********\n");
        printf("\n\t\t\tEnter Your Name:");
        scanf("%s",&name);
        printf("\n\t\t\tHello! %s\n",name);
        printf("\t**********=============================================**********\n");

    //getch();
    return 0;
}
