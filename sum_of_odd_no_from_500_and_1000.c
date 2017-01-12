/*
Student name : Bikal koju
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 
Program : WAP to print sum of all odd no between 500 and 1000
Date : 12 jan,2017
*/

#include<stdio.h>

int main()
{
	int i,sum=0;
		for(i=501;i<=1000;i=i+2)
		{
			sum=sum+i;
		}
			printf("Sum of odd no is %d.",sum);

return 0;
}
