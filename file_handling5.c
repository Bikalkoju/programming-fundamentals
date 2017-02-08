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
	char data[255];
	fp=fopen("test.txt","r");
	fgets(data,255,(FILE*)fp);
	printf("%s",data);
	printf("\n");
	fclose(fp);
	return 0;	
}
