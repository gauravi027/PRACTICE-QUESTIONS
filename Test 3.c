-----------------------------------------Question 1--------------------------------------------
#include<stdio.h>
void main()
{
	int i;
	printf("Enter the unit : ");
	scanf("%d",&i);
	
	
	if(i>=1 && i<=50)
	{
		i = 30 * i;
		printf("%d rs",i);
	}
	else
	{
		if(i>=51 && i<=150)
		{
			i = 40 * i;
			printf("%d rs",i);
		}
		else
		{
			if(i>151)
			{
				i = 50 * i;
				printf("%d rs",i);
			}
			else
			{
				printf("0 rs");
			}
		}
	}
}

-----------------------------------------Question 2--------------------------------------------
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number to be checked : /n");
	scanf("%d",&n);
	
	if(n > 0)
	{
		printf("The number is positive");
		
	}
	else
	{
		if(n<0)
		{
			printf("The number is negative");
		}
		else
		{
			printf("Number is 0");
		}
	}
}
