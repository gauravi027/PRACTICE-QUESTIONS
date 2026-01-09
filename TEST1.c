*********************************** Question 01 *****************************************
WAP Print even and odd numbers in a given range.
eg. i/p: start= 10, end= 25
o/p: odd: 11 13 15 17 19 21 23 25
eg. i/p: start= 1, end= 15
o/p: even: 2 4 6 8 10 12 14
________________________________________________________________________________________

#include<stdio.h>
void odd();
void even();
void main()
{

	odd();
	even();
		
}
void odd ()
{
	int start,end,i;
	printf("Enter starting number :");
	scanf("%d",&start);
	int n;
	printf("Enter ending number :");
	scanf("%d",&end);
	
	for(i=start;i<=end;i++)
	{
	  if (i % 2 != 0)
	  {
	  	printf("ODD numbers are: %d\n",i);
	  }
	 
	}
}

void even()
{
	int start,end,i;
	printf("Enter starting number :");
	scanf("%d",&start);

	printf("Enter ending number :");
	scanf("%d",&end);
	
	for(i=start;i<=end;i++)
	{
	  if (i % 2 == 0)
	  {
	  	printf("Even numbers are: %d\n",i);
	  }
	 
	}

}

*********************************** Question 02 *****************************************
WAP to add alternate numbers from given range.
eg. i/p: start= 1, end= 5
o/p: sum= 9
________________________________________________________________________________________

#include<stdio.h>
void main()
{
	alt();
	
}
void alt()
{
	int start,end,i;
	int sum = 0;
	printf("Enter starting number :");
	scanf("%d",&start);

	printf("Enter ending number :");
	scanf("%d",&end);
	
	for(i=start ; i<=end ; i=i+2)
	
	{
		sum = sum + i;
	}
	printf("Alternate numbers are %d\n",i);
	printf("Sum of alternate numbers is = %d\n ",sum);
	
}

________________________________________________________________________________________
