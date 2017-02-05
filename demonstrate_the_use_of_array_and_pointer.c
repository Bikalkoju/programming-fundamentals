/*
student name : Bikal Koju
subject name : Programming Fundamental
roll no      : 08
Lab sheet no : 28
program      : WAP to demonstrate the use of array and pointer
Date         : 5 Feb 2017
*/
# include<stdio.h>

int main()
{
	int a[5]={10,20,30,40,50},i;
	int *p[5];
	
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
		printf("memory address : %d\n",p[i]);
	}
	return 0;
}
