------------------------------------Question 1------------------------------------------------
#include <stdio.h>

void main(){
	if (printf("Exam"))
	{
		printf("hello");
	}
	else
	{
		printf("bye");
	}
}
--------------------------------- Question 2 -----------------------------------------------
//program to find wheather char is uppercase or lowercase//
#include <stdio.h>

void main(){
	char ch;
	printf("Enter a charachter: ");
	scanf ("%c",&ch);
    if ( ch >= 'a' && ch <= 'z')
	{
		printf("Letter is Lowercase");
	}
	else
	{
		printf("Letter is Uppercase");
	}
}
------------------------------------Question 3 ---------------------------------------------
//convert uppercase to lower case & lowercase to uppercase//
#include <stdio.h>

void main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if (ch >= 'A' && ch <= 'Z'){
		ch = ch + 32;
		printf("Now the character is: %c",ch);
	}
	else 
	{
		ch = ch - 32;
		printf("Now the character is: %c",ch);
	}
}
---------------------------------- Question 4 --------------------------------------------
//nested loop 
#include <stdio.h>

void main(){
	int marks;
	printf("Enter Marks: ");
	scanf("%d",&marks);
	
	if ( marks>= 95)
	{
		printf("A+");
	}
	else 
	{
		if (marks>= 85)
		{
			printf("B+");
			
		}
		else
		{
			if (marks>= 65)
			{
				printf("C+");
			}
			else 
			{
				printf("Pass Only");
			}
		}
	}
}
----------------------------------------Question 5---------------------------------------------
//highest among 3 nos code in nested loop//
#include <stdio.h>

void main (){
	int a=10, b=200, c=30;
	
	if ( a>b){
		printf("A is greater number");
		
	}
	else 
	{
		if ( b>c){
			printf("B is greater");
		}
		else
		{
			printf("C is greater");
		}
		
	
	}
}
---------------------------------------Question 6 ---------------------------------------------
//nested loop example where no is positive,negative or zero//
#include <stdio.h>

void main(){
	int no;
	printf("enter number: ");
	scanf("%d", &no);
	
	if (no>0)
	{
		printf("Number is positve");
	}
	else 
	{
		if (no<0)
		{
			printf("Number iS negative");
		}
		else
		{
			printf("Number is 0");
		}
	}
	
}
------------------------------------------------------------------------------------------------
