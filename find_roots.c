/*
Student name: Bikal Koju
Roll:
Subject:programming fundamentals
lab:
program:write a c program to find roots of quad eqn using if else
Date:
*/

#include<stdio.h>
/*#include<conio.h>*/
#include<math.h>

int main()
{
	int a,b,c,dis,root1,root2;
		printf("Enter value a:");
		scanf("%d",&a);
		
		printf("Enter value b:");
		scanf("%d",&b);
		
		printf("Enter value c:");
		scanf("%d",&c);
	
		dis=pow(b,2)-4*a*c;
	
		
		if(dis>=0)
		{
			root1=(-b+pow(dis,0.5))/(2*a);
			printf("%d",root1);
			
			root2=(-b-pow(dis,0.5))/(2*a);
			printf("%d",root2);
		}
		
		else
		{
			printf("root is imaginary");
			}
	
return 0;	
}
