/*
Student name: Bikal Koju
Roll no: 03
Subject: Programming fundamentals
Lab no: 03
Program: Write a c program to calculate area and circumference of a circle having radius 'r','r' should taken from user
Date: 18 Nov,2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float r,area,circumference,PI=3.14;
        printf("\nInput Value Of Radius:");
        scanf("%f",&r);

        area=PI*pow(r,2);
        circumference=2*PI*r;

        printf("\n\nArea of circle is %f.",area);
        printf("\n\nCircumference of circle is %f.",circumference);
    getch();
return 0;
}
