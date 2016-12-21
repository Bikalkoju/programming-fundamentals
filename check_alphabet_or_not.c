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
	int ASCII;
		printf("\tEnter any character: ");
		scanf("%c",&ch);
		
		ASCII=ch;
		if((ASCII>=65&&ASCII<=90) || (ASCII>=97&&ASCII<=122))
		{
			printf("\n\tThe character is alphabet.");
		}
		else
		{
			printf("\n\tThe character is not alphabet.");
		}
return 0;	
}
