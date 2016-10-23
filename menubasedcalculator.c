/*
Student Name: Bikal Koju
Subject:Programming fundamental
Roll:
Lab:
Programme:write a c program of menu based calculator using switch case and break
Date:2016-10-23
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	char c;
	loop:
		printf("\t***========================================================***");
		printf("\n\t\t\t\tSimple Calculator\n");
		
		printf("\t***========================================================***");
		printf("\n\t\tSelect any of following");
		printf("\n\t\t1 for addition");
		printf("\n\t\t2 for subtraction");
		printf("\n\t\t3 for multiplicaton");
		printf("\n\t\t4 for division\n");
		printf("\t\tEnter selected number:");
		scanf("\t%c",&c);
		printf("\t***========================================================***\n");
		
		printf("\n\t\tEnter first number:");
		scanf("%d",&a);
		
		printf("\n\t\tEnter second number:");
		scanf("%d",&b);
		
	switch(c)
	{
		case '1':
			printf("\t\tAddition of two no is:%d\n",a+b);
		break;
		
		case '2':
			printf("\t\tDifferencce of two no is:%d\n",a-b);
		break;
		
		case '3':
			printf("\t\tmultiplication of two no is:%d\n",a*b);
		break;
		
		case '4':
			printf("\t\tDivision of two no is:%d\n",a/b);
		break;
		
		default:
		printf("\t\tExit");
	}
		printf("\t***========================================================***\n\n\n\n\n\n");
	goto loop;	
return 0;
}
