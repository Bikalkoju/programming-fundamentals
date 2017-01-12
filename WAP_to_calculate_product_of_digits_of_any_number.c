/*
Student name : Bikal koju
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 
Program : WAP to calculate product of digits of any number
Date : 12 jan,2017
*/

#include<stdio.h>

int main()
{
	int a,n,mul=1;
		printf("\nEnter any number : ");
		scanf("%d",&a);
		
		for( ;a>0;a=a/10)
		{
			n=a%10;
			mul=mul*n;
		}
		printf("\nproduct of digits is %d",mul);
		printf("\n\n");
		
return 0;
}
