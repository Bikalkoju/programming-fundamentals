/*
Student Name : Bikal Koju
Roll No. : 03
Subject : Programming Fundamental
Lab No. : 05
Program : Write a c program to find the roots of quadratic eqn and value are assigned from user
Date : 23 nov, 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
		float x1,x2,a,b,c,dis;
			printf("\nEnter the value of a:");
			scanf("%f",&a);
			printf("\nEnter the value of b:");
			scanf("%f",&b);
			printf("\nEnter the value of c:");
			scanf("%f",&c);

			dis=pow(b,2)-(4*a*c);
			x1=pow(dis,0.5)/(2*a);
			x2=-(pow(dis,0.5)/(2*a));

			printf("\nFirst root is %f.",x1);
			printf("\nSecond root is %f.",x2);
		getch();
	return 0;
}
