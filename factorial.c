/*
Name:Bikal Koju
Subject:Programming fundamentals
Roll :
Lab no:09
Program:Write a programme to print factorial of any no. provided by user using do while loop
Date:2016-10-26
*/

#include<stdio.h>

int main()
{
	int n,fact=1;
		printf("Enter a number:");
		scanf("%d",&n);
		
	do
	{
		fact *=n;
		--n;	
		
	}
	while (n !=0);
		printf("\nThe factorial of given no. is:%d",fact);
	
return 0;
}
