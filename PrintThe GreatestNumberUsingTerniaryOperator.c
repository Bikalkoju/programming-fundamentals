/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab No  : 11
Program : WAP to print largest number among three numbers using terniary operator
Date    : 9 Dec, 2016
*/

#include<stdio.h>

int main()
{
	int a,b,c;
		printf("\nEnter First Number : ");
		scanf("%d",&a);
		printf("\nEnter Second Number : ");
		scanf("%d",&b);
		printf("\nEnter Third Number : ");
		scanf("%d",&c);
		
		(a>=b&&a>=c)?printf("\nThe Greatest Number is %d.",a):(b>=c)?printf("\nThe Greatest Number is %d.",b):
		printf("\nThe Greatest Number is %d.",c);
		
return 0;
}
