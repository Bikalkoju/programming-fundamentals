/*
Student name : Bikal Koju
Subject : Programming fundamental
Lab sheet no : 29
Program : WAP to create a file and assign data to the file
Date : 8 feb,2017
*/

#include<stdio.h>

int main()
{
FILE *fp;
int a,b,add;
fp=fopen("test3.txt","w");
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
add=a+b;
fprintf(fp,"addition of two number is %d",add);
fclose(fp);
return 0;	
}
