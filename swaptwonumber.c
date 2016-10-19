/*
Student Name: Bikal Koju
Subject:programming fundamentals
Roll:
Lab No:
Programme: write a program to swap two numbers from users
Date:
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,temp;
		printf("Enter first number :");
		scanf("%d",&a);
		
		printf("Enter second number :");
		scanf("%d",&b);
		
		temp=a;
		a=b;
		b=temp;
	
		printf("\nfirst number after swap is %d",a);
		printf("\nsecond number after swap is %d",b);
	
	return 0;
}
