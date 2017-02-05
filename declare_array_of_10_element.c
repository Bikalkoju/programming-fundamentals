/*
student name : Bikal Koju
subject name : Programming Fundamental
roll no      : 08
Lab sheet no : 28
program      : WAP to declare an array of 10 elements and search a particular element to display whether it exist ornot
Date         : 5 Feb 2017
*/
# include<stdio.h>

int main()
{
	int array[10]={1,2,3,4,5,6,7,8,9,10},a,i,n;
	
	printf("Enter a number to check : ");
	scanf("%d",&a);
	
	for(i=0;i<10;i++)
	{
	if(a==array[i])
		{
			n=1;
			break;
		}
	}
	
	if(n==1)
	printf("it exists");
	else
	printf("it doesnot exiksts");
	
	return 0;
}
