------------------------------------------------------------- Question 1 ------------------------------------------------------------------
*/display and store an array using function//*

#include<stdio.h>
void storearray(int* ptr , int size);
void displayarray(int* ptr, int size);
void main()
{
	int arr[10];
	storearray(arr,10);
	displayarray(arr,10);
	
}
void storearray(int* ptr, int size)
{
	printf("Elements in array are:\n");
	for(int i = 0; i< size ; i++)
	{
		
		scanf("%d",&ptr[i]);
	}
	
}

void displayarray(int* ptr , int size)
{
	printf("Array is :");
	for(int i = 0; i< size ; i++)
	{
		
		printf(" %d ",ptr[i]);
		
	}
	
}
------------------------------------------------------------- Question 2 ------------------------------------------------------------------
//we have 3 arrays arr[5], brr[7] , crr[3] scan array from user and display it //
           */method 1// 
  
#include<stdio.h>
void main()
{
	int i;
	int arr[5], brr[7], crr[3];

	printf("Enter 5 elements of arr[i]:\n");	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);//scanf is used to take input//
	}
	
	printf("Elements of array are : \n");
	for(i = 0;i < 5;i++)
	{
		printf(" %d ",arr[i]);//Here, you want to display array elements//here space befoe and after %d to maintain space between elements of array//
	}
	printf("\n");
  //brr//
    printf("Enter 7 elements of brr[i]:\n");
    for(i=0 ; i< 7 ; i++)
    {
    	scanf("%d",&brr[i]);
	}
	printf("Elements of array are :\n");
	for(i=0 ; i< 7 ; i++)
	{
		printf(" %d ",brr[i]);
	}
    printf("\n");
  //crr//
    printf("Enter 3 elements of crr[i]:\n");
    for(i = 0 ; i< 3 ; i++)
    {
    	scanf("%d", &crr[i]);
	}
	printf("The elements of arraya are :\n");
	for (i=0;i<3;i++)
	{
		printf(" %d ",crr[i]);
	}
}
------------------------------------------------------------- Question 3 ------------------------------------------------------------------
//scan 3 arrays using function // 
        */method 2//  

#include<stdio.h>
storearray(int *ptr , int size);
void main()
{
	int i;
	int arr[4], brr[5], crr[7];
	
	printf("Enter elements for array arr[i]: \n");
	//for(i=0; i<4 ; i++)
	//{
	//	scanf("%d",&arr[i]);
	//}  instead of repeated using scanf we will call the function directly//
	storearray(arr,4);
	
	printf("Enter elements for array brr[i]:\n");
	//for(i=0 ; i<5 ; i++)
	//{
	//	scanf("%d",&brr[i]);
    //	}
    storearray(brr,5);
	
	printf("Enter elements for array crr[i]:\n");
	//for(i=0 ; i<7 ; i++)
	//{
	//	scanf("%d",&crr[i]);
	//}
	storearray(crr,7);
}
 
storearray(int *ptr , int size)
{
	for(int i=0; i<size ; i++)
	{
		scanf("%d",&ptr[i]);//treating pointer like an arrray//
	}
	
}
------------------------------------------------------------- Question 4 ------------------------------------------------------------------
  //to saerch an element inarray//
//enter number ypu want to search in array//
#include<stdio.h>
void main()
{

	int arr[10];
	storearray(arr,10);
	displayarray(arr,10);
	
	printf("\n");
    printf("Enter number you want to search in an array:\n ");
    int no;
    scanf("%d",&no);
    int index = search(arr,10,no);
    if (index!=-1)
    {
    	printf("Found number at %d index",index);
	}
	else
	{
		printf("Index not found");
	}
	printf("\n");
}
void storearray(int* ptr, int size)
{
	printf("Elements of array are:\n");
	for(int i=0; i< size ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\n");
}

void displayarray(int* ptr , int size)
{
	printf("Array is : ");
	for(int i = 0 ; i< size ; i++)
	{
		printf(" %d, ",ptr[i]);
	}
}
int search(int* ptr,int size ,int no)//because funtion returns integor//
{
	
    for(int i=0 ; i<size ;i++)
    {
    	if (ptr[i]==no)
    	return i;
	}
	return -1;//-1 because element such as -1 is not present or does not exist//
	

	
	
}
