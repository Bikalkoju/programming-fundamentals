/*
Name    : Bikal Koju
Roll no :
subject : Programming fundamentals
Lab no  : 16
Program : WAP to print all alphabet from a to z using while loop 
Date    : 8 jan 2017
*/

#include<stdio.h>

int main()
{
	char c=65;
	
	while(c<=90)
	{
		printf("%c\t",c);
		c++;
	}
	printf("\n");
	c=97;
	while(c<=122)
	{
		printf("%c\t",c);
		c++;
	}
return 0;
}
