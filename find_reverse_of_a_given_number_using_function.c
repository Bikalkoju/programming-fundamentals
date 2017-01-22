/*
Student name : Bikal Koju
Subject : Programming fundamental
Lab sheet no : 21
Program : WAP to find reverse of a given number using function
Date : 22 jan,2017
*/

#include<stdio.h>
int num(int x);

int main ()
{
	
	int a;
	printf("Enter any number : ");
	scanf("%d",&a);
	printf("\nReverse of the no is : ");
	
	num(a);
	return 0;
}

int num(int x)
{
	int b;
	while(x>0)
	{
		b=x%10;
		printf("%d",b);
		x=x/10;
	}
	return b;
}
