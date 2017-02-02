/*
Student Name : Bikal Koju
Subject : Programming Fundamentals
Roll No : 08
Program : Write a C program to find the product of three numbers using structure and passing structure as argument in function
Lab Sheet No : 27
Date : 02 Feb 2017
*/

#include<stdio.h>

struct product
{
	int a,b,c;
}mul;

int product(struct product mul);

int main()
{
	int result;
	printf("Enter first number : ");
	scanf("%d",&mul.a);
	printf("Enter second number : ");
	scanf("%d",&mul.b);
	printf("Enter third number : ");
	scanf("%d",&mul.c);
	
	result=product(mul);
	printf("\nProduct of three no is %d.",result);
	
	return 0;
}

int product(struct product mul)
{
	int m;
	m=mul.a*mul.b*mul.c;
	return m;
}
