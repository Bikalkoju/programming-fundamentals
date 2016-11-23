/*
Student Name : Bikal Koju
Roll No. : 03
Subject : Programming Fundamental
Lab No. : 05
Program : Write a c program to read temperature in fahrenheit and convert into centigrade
Date : 23 nov, 2016
*/

#include<stdio.h>

int main ()
{
	float f,c;
		printf("\nInput temperature in fahrenheit:");
		scanf("%f",&f);
		
		c=(5*(f-32))/9;
		
		printf("\n\nTemperature in centigrade is %f",c);

	return 0;
}
