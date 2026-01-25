----------------------------------------------------Question 1------------------------------------------------------------
#include<stdio.h>
void main()
{
	char str[10];
	printf("Enter string:");
	scanf("%s",str);
	printf("Given string is:%s",str);
	
}

----------------------------------------------------Question 1------------------------------------------------------------
//code to count characters in string//
#include<stdio.h>
void main()
{
	char str[10];
	printf("Enter string:");
	scanf("%s",str);
	int i=0;
	int count = 0;
	
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	printf("the string is :%s ",str);
	printf("The count of characters in string is : %d",count);
}
