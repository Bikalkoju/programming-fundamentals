/*
Student name : Bikal koju
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 
Program : WAP to print table of any number
Date : 12 jan,2017
*/

#include<stdio.h>

int main()
{
	int i=0,a,mul;
		printf("\nEnter any number : ");
		scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		mul=a*i;
		printf("\n%d * %d  = %d",a,i,mul);
	}


return 0;
}
