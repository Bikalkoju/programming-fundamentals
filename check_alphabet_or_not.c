/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab no. : 14
Program : WAP to check character asigned from user is vowels or not
Date    : 21 Dec, 2016
*/

#include<stdio.h>

int main()
{
	char ch;
		printf("Enter any alphabet: ");
		scanf("%c",&ch);
		
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
		printf("\nThe alphabet is a vowel.");
		}
		
		else
		{
		printf("\nThe alphabet is not vowel.");
		}

return 0;
}
