-------------------------------------------------------------------------- QUESTION 01 ---------------------------------------------------------------------------------
//simple input output structure (struct) example
#include<stdio.h>
struct employee
{
	int id;
	char name[50];
	float salary;
		
};
void main()
{
	struct employee e1;
	
	printf("Enter the employee id , name , salary :\n");
	scanf("%d  %s  %f ",&e1.id , &e1.name , &e1.salary);
	
	printf("\n So the Employee details are as follows : \n");
	printf("ID = %d\n",e1.id);
	printf("Name = %s\n", e1.name);
	printf("Salary = %f\n", e1.salary);
}

------------------------------------------------------------------------- QUESTION 02 ---------------------------------------------------------------------------------
//Array of employees using struct // 
#include<stdio.h>

struct Employee
{
	int id;
	char name[30];
	float salary;
	
};

void main()
{
	struct Employee e[3];
	
	for(int i=0 ; i<3 ; i++)
	{
		printf("\n Enter id,name , salary  %d:\n", i+1);
		scanf("%d  %s  %f", &e[i].id, &e[i].name , &e[i].salary);
		
	}
	
	printf("\nEmployee Records :\n");
	for(int i=0; i<3 ; i++)
	{
		printf("\nID= %d  Name = %s  Salary = %.2f",e[i].id, e[i].name , e[i].salary);
	}
}
------------------------------------------------------------------------- QUESTION 03 ---------------------------------------------------------------------------------
//Example of student record //
#include<stdio.h>

struct student
{
	int roll;
	char name[30];
	float marks ;
	
};

void main()
{
	struct student s1;
	
	printf("Enter Rollno , Name , Marks :\n ");
	scanf("%d  %s  %f", &s1.roll , &s1.name , &s1.marks);
	
	printf("\nStudent Details \n");
	printf("Roll = %d\n", s1.roll);
	printf("Name = %s\n",s1.name);
	printf("Marks = %.2f\n",s1.marks);
}
------------------------------------------------------------------------- QUESTION 04 ---------------------------------------------------------------------------------
//student record in array form

#include<stdio.h>
struct student
{
	int roll;
	char name[30];
	float marks;
	
};
void main()
{
	struct student s[3];
	
	for(int i=0 ; i<3 ; i++)
	{
		printf("\nEnter Rollno , Name , Marks %d : \n",i+i);
		scanf("%d  %s  %f", &s[i].roll , &s[i].name , &s[i].marks);
			
	}
	printf("\nStudent record will be :\n");
	for(int i=0; i<3 ; i++)
	{
		printf("\nRollno = %d  Name = %s  Marks = %.2f",s[i].roll , s[i].name , s[i].marks);
	}
}
