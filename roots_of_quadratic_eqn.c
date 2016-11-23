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
		float X1,X2,a,b,c,dis;
			printf("Enter the value of a:");
			scanf("%f",&a);
			printf("Enter the value of b:");
			scanf("%f",&b);
			printf("Enter the value of c:");
			scanf("%f",&c);
			
			dis=pow(b,2)-(4*a*c);
			X1=pow(dis,0.5)/(2*a);
			X2=-(pow(dis,0.5)/(2*a));
			
			printf("First root is %f.",X1);
			printf("Second root is %f.",X2);
		getch();

	return 0;
}
