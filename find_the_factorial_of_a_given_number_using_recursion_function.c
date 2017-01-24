/*
Student name : Bikal Koju
Subject : Programming fundamental
Lab sheet no : 22
Program : WAP to find the factorial of a given number using recursion function
Date : 24 jan,2017
*/

#include<stdio.h>
int fact(int a);

int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	printf("The factorial of the no is %d.",fact(n));
	
	return 0;
}	

int fact(int a)
{
	if(a==1)
	return 1;
	else
	return a*fact(a-1);
}
