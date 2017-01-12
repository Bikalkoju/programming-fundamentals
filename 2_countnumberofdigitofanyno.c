/*
Student name : Bikal koju
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 
Program : WAP to count number of digit of any no
Date : 12 jan,2017
*/

#include<stdio.h>

int main()
{
	int a,count=0;
		printf("\nEnter number : ");
		scanf("%d",&a);
		
		do
		{
			a=a/10;
			count=count+1;
		}
		while(a>0);
		printf("\nno of digits are %d.",count);


return 0;
}
