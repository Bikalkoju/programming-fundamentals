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
int num=10;
fp=fopen("test2.txt","w");
fprintf(fp,"value is %d.",num);
fclose(fp);
return 0;	
}
