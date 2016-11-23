/*
Student Name : Bikal Koju
Roll No. : 03
Subject : Programming Fundamental
Lab No. : 05
Program : Write a c program to convert centigrade into fahrenheit
Date : 23 nov, 2016
*/

#include<stdio.h>

int main ()
{
	float f,c;
		printf("\nInput temperature in centigrade:");
		scanf("%f",&c);
		
		f=((9*c)/5)+32;
		
		printf("\n\nTemperature in fahrenheit is %f",f);
	

	return 0;
}
