/*
Student name : Bikal koju
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 
Program : WAP to print all the even number from 1 to 100 using for, while and do while loop
Date : 12 jan,2017
*/

#include<stdio.h>

int main()
{
	int a=0;
		for(a=2;a<=100;a=a+2)
		{
			printf("\t%d",a);
		}
		printf("\n\n");
		
		a=2;
		while(a<=100)
		{
			printf("\t%d",a);
			a=a+2;
		}
		printf("\n\n");
		
		a=2;
		do
		{
			printf("\t%d",a);
			a=a+2;
		}
		while(a<=100);


return 0;
}
