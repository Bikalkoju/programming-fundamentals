/*
Student name : Bikal koju
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 
Program : WAP to calculate sum of digits of any number
Date : 12 jan,2017
*/

#include<stdio.h>

int main()
{
	int a,n,sum=0;
		printf("\nEnter any number : ");
		scanf("%d",&a);
		
		
		while(a>0)
		{
			n=a%10;
			a=a/10;
			sum=sum+n;
			
		}
		printf("\nsum of digits is %d",sum);
		printf("\n\n");


return 0;
}
