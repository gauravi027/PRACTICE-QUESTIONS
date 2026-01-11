Practice questions of math.h lib
---------------------------------------------------------------------------------------------------
  *********************************** Q1 (Square root) **************************************************
#include<stdio.h>
#include<math.h>

void main()
{
	double a,result;
	
	printf("Enter number a: ");
	scanf("%lf",&a);
	
	result = sqrt(a);
	printf("Square root = %.2lf",result);
		
}

---------------------------------------------------------------------------------------------------
  *********************************** Q2 (Power)**************************************************
#include<stdio.h>
#include<math.h>

void main()
{
	double a ,b , result;
	
	printf("Enter num base :");
	scanf("%lf",&a);
	printf("Enter num exponent :");
	scanf("%lf",&b);
	
	result = pow(a,b);
	printf("Result = %.2lf",result);	
}
---------------------------------------------------------------------------------------------------
  *********************************** Q3 (Absolute value)**************************************************
#include<stdio.h>
#include<math.h>

void main()
{
	int a;
	printf("Enter number :");
	scanf("%d",&a);
	
	printf("Absolute value = %d",abs(a));	
}

---------------------------------------------------------------------------------------------------
  *********************************** Q4 (floating Absolute Value)*********************************
#include<stdio.h>
#include<math.h>

void main()
{
	float a;
	printf("Enter number :");
	scanf("%f",&a);
	
	printf(" Floating Absolute value = %.2f",fabs(a));	
}

---------------------------------------------------------------------------------------------------
  *********************************** Q5 (Ceil value)**********************************************
  #include<stdio.h>
#include<math.h>
void main()
{
	double a;
	printf("Enter number a:");
	scanf("%lf",&a);
	
	printf("Ceil value = %.2lf",ceil(a));
}

---------------------------------------------------------------------------------------------------
  *********************************** Q6 (Floor value)**********************************************
#include<stdio.h>
#include<math.h>
void main()
{
	double a;
	printf("Enter number a:");
	scanf("%lf",&a);
	
	printf("Floor value = %.2lf",floor(a));
}

---------------------------------------------------------------------------------------------------
  *********************************** Q7 (Sine, Cos, Tan)**********************************************
  #include<stdio.h>
#include<math.h>

void main()
{
	double angle;
	printf("Enter angle in radian: ");
	scanf("%lf",&angle);
	
	printf("Sin value is %.2lf\n",sin(angle));
	printf("Cos value is %.2lf\n",cos(angle));
	printf("Tan value is %.2lf\n",tan(angle));
}
