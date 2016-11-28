/*
Name     : Bikal Koju
Roll no. : 03
Subject  : Programming Fundamentals
Lab no.  : 07
Program  : Write a c program to enter marks of seven subjects and calculate a)total b)average c)percentage
Date     : 28 Nov, 2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
    float a,b,c,d,e,f,g,total,average,percentage;
        printf("\n\tEnter marks obtained in Computer Architecture : ");
        scanf("%2f",&a);
        printf("\n\tEnter marks obtained in Programming Fundamentals : ");
        scanf("%f",&b);
        printf("\n\tEnter marks obtained in Software Engineering : ");
        scanf("%f",&c);
        printf("\n\tEnter marks obtained in Algebra : ");
        scanf("%f",&d);
        printf("\n\tEnter marks obtained in Discrete Structure : ");
        scanf("%f",&e);
        printf("\n\tEnter marks obtained in Management Organization : ");
        scanf("%f",&f);
        printf("\n\tEnter marks obtained in Interactive Skills : ");
        scanf("%f",&g);

        total=a+b+c+d+e+f+g;
        average=total/7;
        percentage=total/7;

        printf("\n\n\tTotal marks obtained   : %.2f",total);
        printf("\n\tAverage marks obtained : %.2f",average);
        printf("\n\tPercentage(%%)          : %.2f",percentage);
    getch();
return 0;
}
