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
fp=fopen("test.txt","w");
fprintf(fp,"My name is Bikal Koju.");
fputs("I study in Sunway.",fp);
fputs("I study in Sunway.",fp);
fputs("I study in Sunway.",fp);
fputs("I study in Sunway.",fp);
fputs("I study in Sunway.",fp);
fputs("I study in Sunway.",fp);
fclose(fp);
return 0;	
}
