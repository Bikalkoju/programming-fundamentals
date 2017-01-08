/*
Name    : Bikal Koju
Roll no :
subject : Programming fundamentals
Lab no  : 16
Program : WAP to check whether year is leap year or not using conditional/ ternary operator
Date    : 8 jan 2017
*/

#include<stdio.h>

int main()
{
	int year;
		printf("\nEnter year : ");
		scanf("%d",&year);
		
		(year%4==0&&year%100!=0)?printf("\n%d is leap year.",year):(year%400==0)?printf("\n%d is a leap year.",year):
		printf("\n%d is not a leap year.",year);
return 0;
}
