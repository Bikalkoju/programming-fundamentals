/*
Student name : Bikal koju
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 
Program : WAP to all alphabet from using for, while and do while loop
Date : 12 jan,2017
*/

#include<stdio.h>

int main()
{
	char c=0;
		for(c=65;c<=90;c++)
		{
			printf("\t%c",c);
		}
		printf("\n\n");
		
		for(c=97;c<=122;c++)
		{
			printf("\t%c",c);
		}
		printf("\n\n");
		
		
		c=65;
		while(c<=90)
		{
			printf("\t%c",c);
			c++;
		}
		printf("\n\n");
		
		c=97;
		while(c<=122)
		{
			printf("\t%c",c);
			c++;
		}
		printf("\n\n");
		
		
		c=65;
		do
		{
			printf("\t%c",c);
			c++;
		}
		while(c<=90);
		printf("\n\n");
		
		c=97;
		do
		{
			printf("\t%c",c);
			c++;
		}
		while(c<=122);
return 0;
}
