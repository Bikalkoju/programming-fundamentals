/*
Student name : Bikal Koju
Subject : Programming fundamental
Lab sheet no : 21
Program : WAP to print armstrong number upto n terms using function
Date : 22 jan,2017
*/

//check with 153 or 370

#include<stdio.h>
int armstrong(int x);

int main ()
{
	int a,result;
	printf("Enter any number : ");
	scanf("%d",&a);
	
	result=armstrong(a);
	if(result==a)
	printf("%d is armstrong no.",a);
	else
	printf("%d is not armstrong number",a);
	return 0;
}

int armstrong(int x)
{
	int n,sum=0;
	while(x>0)
	{
		n=x%10;
		sum=sum+(n*n*n);
		x=x/10;
	}
	return sum;
}



