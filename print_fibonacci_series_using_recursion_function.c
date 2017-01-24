/*
Student name : Bikal Koju
Subject : Programming fundamental
Lab sheet no : 22
Program : WAP to print the following fibonacci series using recursion function:0 1 1 2 3 5 8 ...10th term
Date : 24 jan,2017
*/

#include<stdio.h>
int fibo(int a);

int main()
{
	int a;
	for(a=0;a<=10;a++)
	{
		printf("%d \t ",fibo(a));
	}
	
	return 0;
}	

int fibo(int a)
{
	if(a==0)
	return 0;
	if(a==1)
	return 1;
	
	return fibo(a-1)+fibo(a-2);
}
