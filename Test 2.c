------------------------------------Test 1 --------------------------------------------
_______________________________________________________________________________________

************************************Question 1*****************************************
To find wether given year is leap year or not
_______________________________________________________________________________________
#include<stdio.h>
void main()

{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	
	if(year % 400 == 0)
	{
		printf("Year is Leap");
	}
	else
	{
		if(year % 4 == 0 && year % 100 != 0)
		{
			printf("Year is leap");
		}
		else
		{
			printf("Year is not Leap");
		}
	}
}
_______________________________________________________________________________________

************************************Question 1*****************************************
Program to print only last two digits of the number
_______________________________________________________________________________________

#include<stdio.h>
void lastn();
void main()
{
	lastn();
	
}
void lastn()
{
	int n,l;
	printf("the number n is:");
	scanf("%d",&n);
	l = n % 100;
	printf("Last number is %d",l);
}
