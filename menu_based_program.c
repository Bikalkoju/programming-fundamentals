/*
Name    : Bikal Koju
Roll No : 08
Subject : Programming Fundamentals
Lab no. : 15
Program : Write a menu based program as:
		   1. to check no is odd/even
		   2. to check no is prime or not
		   3. to check assigned character is vowel or consonant
		   4. to check assigned character is alphabet
		   5. to check no is divisible by 5 and 11
		   6. exit
Date    : 28 Dec, 2016
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	int a,b;
		printf("\nChoose any of following operation");
		printf("\n1 to check no is odd/even");
		printf("\n2 to check no is prime or not");
		printf("\n3 to assigned character is vowel or consonant");
		printf("\n4 to check assigned character is alphabet");
		printf("\n5 to check no is divisible by 5 and 11");
		printf("\n6 exit");
				
		printf("\nEnter any character : ");
		scanf("%c",&c);
		
		printf("\nEnter the number: ");
		scanf("%d",&a);

		switch(a)
		{
			case 1:
				b=c;
				if(b%2==0)
				printf("\n%d is even.",b);
				else
				printf("\n%d is odd.",b);
			break;
			
			/*case 2:
				b=c;
				for(i==0;i<=b;i++)
					if(b%i==0)
					printf("\nThe no is prime.");
					else
					printf("\nThe no is not prime.");
			break;*/
			
			
			case 3:
				if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
				printf("\nThe alphabet is a vowel.");
				else
				printf("\nThe alphabet is consonant.");
			break;
			
			case 4:
				b=c;
				if((b>=65&&b<=90) || (b>=97&&b<=122))
				printf("\nThe character is alphabet.");
				else
				printf("\nThe character is not alphabet.");
			break;
			
			case 5:
				b=c;
				if(b%5==0&&b%11==0)
				printf("\n%d is divisible by 5 & 11.",b);
				else
				printf("\n%d is not divisible by 5 & 11.",b);
			break;
			
			case 6:
				exit (0);
			break;
			
			default:
			printf("\nThank you for visiting.");	
		}
return 0;	
}
