/*
Student Name : Bikal Koju
Roll No. : 03
Subject : Programming Fundamental
Lab No. : 05
Program : Write a c program to find ASCII value of any character assigned from user
Date : 23 nov, 2016
*/

#include<stdio.h>
#include<conio.h>

int main ()
{
	char C;
	int a;
        printf("\nEnter any character:");
        scanf("%c",&C);

        a=C;

        printf("\nThe ASCII value is %d.",a);

		getch();
	return 0;
}
