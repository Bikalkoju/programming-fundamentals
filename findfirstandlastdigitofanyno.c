/*
Student name : Bikal koju
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 
Program : WAP to find first and last digit of any no
Date : 12 jan,2017
*/

#include<stdio.h>

int main()
{
	int a=0,i,n;
		printf("\nEnter any number : ");
		scanf("%d",&a);
		
	i=a%10;
	printf("\n\nLast digit of no is %d.",i);

	
	do 
	{
		n=a%10;
		a=a/10;
	}
	while(a>0);
	printf("\nFirst digit is %d",n);
	
	
return 0;
}
