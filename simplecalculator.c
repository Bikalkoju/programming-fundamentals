/*
Student Name: Bikal Koju
Subject:Programming fundamental
Roll:
Lab:
Programme:write a c program of simple calculator using switch case and break
Date:2016-10-23
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	char c;
		printf("Enter (+,-,*,/):\n");
		scanf("%c",&c);
		
		printf("Enter first number:\n");
		scanf("%d",&a);
		
		printf("Enter second number:\n");
		scanf("%d",&b);
		
	
		
	switch(c)
	{
		case '+':
			printf("Sum of no is:%d",a+b);
		break;
		
		case '-':
			printf("Difference of no is:%d",a-b);
		break;
		
		case '*':
			printf("Product of no is:%d",a*b);
		break;
		
		case '/':
			printf("Division of no is:%d",a/b);
		break;
		
		default:
			printf("processing");
	}		
return 0;	
}
