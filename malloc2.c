-------------------------------------------QUWSTION 1 ---------------------------------------------------
//Example of Dynamic array with zero initialisation

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	int* arr;
	
	printf("Enter the size of elements to be printed: ");
	scanf("%d",&n);
	
	arr = (int*)calloc(n , sizeof(int)); //initializes all values to zero
	
	if(arr == NULL)
	{
		printf("Memory alocation failed");
		
	}
	
	printf("Values after being allocated are: ");
	for(int i=0 ; i<n ; i++)
	{
		printf(" %d ", arr[i]);
	}
	
	free(arr); //never forget to free in calloc , malloc , realloc
}
-------------------------------------------QUWSTION 2 ---------------------------------------------------
//TAKE INPUT AND FIND AVERAGE
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int* arr;
	int n;
	float sum = 0;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	arr = (int*)calloc(n,sizeof(int));
	
	if(arr == NULL)
	{
		printf("Memory is not allocated");
		
	}
	
	printf("Array elements are : ");
	for(int i =0; i< n; i++)
	{
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
		
	}
	printf("Average is : %.2f\n ",sum / n);
	
	free(arr);
}

-------------------------------------------QUWSTION 3 ---------------------------------------------------
//Increase array size
//print first size array
//then print newsize array
// this code can shrink and also increase number of elements in array {try out 
//enter size n : 4 and  newsize : 2  this will shrink the array to 2 size array by removing extra 2 elements from it

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int* arr;
	int n,i ;
	int newsize;
	
	printf("Enter the initial size of array: ");
	scanf("%d",&n);
	
	arr = (int*)malloc(n * sizeof(int));
	
	if(arr == NULL)
	{
		printf("Memory allocation failed \n");
		
	}
	
	printf("Elements of array are : ");
	for(int i= 0; i<n ; i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	printf("Array will initially be : \n");
	for(int i= 0; i<n ; i++)
	{
		printf(" %d ", arr[i]);
		
	}
	
	printf("\nEnter new-size of array : \n ");
	scanf("%d",&newsize);
	
	int* temp = (int*)realloc(arr,newsize * sizeof(int));
	
	if(temp == NULL)
	{
		printf("Reallocation failed");
		free(arr); //free array here so that there wont be any leakages
		return; //after reallocation arr , program still continues and uses it so to stop that we must write return 
	}
	arr = temp;
	
	printf("Enter additional elements you want to: \n");
	for(int i= n ; i<newsize ; i++) // initialise i=n not i=0 then it will again start initialization 
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Final array : \n");
	for(int i= 0 ; i<newsize ; i++)// here we are printing final array from 0th index so write i=0
	{
		printf(" %d ",arr[i]);
	}
	
	free(arr);
	
}
-------------------------------------------QUWSTION 4 ---------------------------------------------------
// write program for shrinking array 

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int* arr;
	int n , newsize;
	
	printf("Enter the size : ");
	scanf("%d", &n);
	
	arr = (int*)malloc(n * sizeof(int));
	
	printf("Enter elements:\n");
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Elements of array are:\n");
	for(int i=0 ; i<n ; i++)
	{
		printf(" %d ", arr[i]);
	}
	
	printf("\n Enter the new-size : \n");
	scanf("%d", &newsize);
	
	arr = (int*)realloc(arr,newsize * sizeof(int));
	
	printf("Array after shrinking : \n");
	for(int i= 0 ; i < newsize ; i++)
	{
		printf(" %d ",arr[i]);
	}
	free(arr);
}
