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
	int r=1;
	char data[255]="The data on the file:";
	fp=fopen("test.txt","r");
	do
	{
	printf("%s",data);
	printf("\n");
	r=fscanf(fp,"%s",data);
	}
	while(r==1);
	fclose(fp);
	return 0;	
}
