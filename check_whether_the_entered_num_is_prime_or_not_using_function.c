/*
Student name : Bikal Koju
Subject : Programming fundamental
Lab sheet no : 21
Program : WAP to check whether the entered num is prime or not using function
Date : 22 jan,2017
*/

#include<stdio.h>
int num(int x);

int main ()
{
	int a,i;
	printf("Enter any number : ");
	scanf("%d",&a);
	
	
	i=num(a);
	if(i==2)
	printf("%d is prime number",a);
	else
	printf("%d is not prime number",a);
	
	return 0;
}

int num(int x)
{
	int b=1,count=0;
	while(b<=x)
	{
		if(x%b==0)
		{
			count++;
		}
		b++;
	}
	return count;
}



