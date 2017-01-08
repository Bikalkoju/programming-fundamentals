/*
Name    : Bikal Koju
Roll no :
subject : Programming fundamentals
Lab no  : 16
Program : WAP to check whether character is an alphabet or not using conditional/ ternary operator
Date    : 8 jan 2017
*/

#include<stdio.h>

int main()
{
	char c;
		printf("\nEnter any charater : ");
		scanf("%c",&c);
		
		(c>=65&&c<=90)?printf("\n%c is a alphabet.",c):(c>=97&&c<=122)?printf("\n%c is a alphabet.",c):
		printf("\n%c is not a alphabet.",c);
return 0;
}
