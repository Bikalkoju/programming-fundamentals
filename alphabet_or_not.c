/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab no. : 14
Program : WAP to check character asigned from user is alphabet or not
Date    : 21 Dec, 2016
*/

#include<stdio.h>

int main()
{
	char ch;
		printf("Enter any character: ");
		scanf("%c",&ch);
		
		if( (ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z') )
		{
			printf("The character is alphabet.");
		}
		else
		{
			printf("The character is not alphabet.");
		}
return 0;	
}
