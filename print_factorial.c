/*
Name:Bikal Koju
Subject:Programming fundamentals
Roll :
Lab no:09
Program:Write a programme to print factorial of any no. provided by user using while loop
Date:2016-10-26
*/

#include<stdio.h>

int main()
{
	int n,fact=1;
		printf("Enter a number:");
		scanf("%d",&n);
		
	while (n !=0)
	{
		fact *=n;
		--n;
	}
		
		printf("%d",fact);
	
return 0;	
}
