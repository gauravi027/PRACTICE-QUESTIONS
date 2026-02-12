--------------------------------------- QUESTION 1 ---------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* ptr;
	
	ptr = (int*)malloc(sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Memory not allocated\n");
		return 1;
	}
	
	printf("Enter a number: ");
	scanf("%d",ptr);
	
	printf("You entered: %d\n",*ptr);
	
	free(ptr);
	return 0;
}

--------------------------------------- QUESTION 2 ---------------------------------------------------
//allocate memory for array (dynamic array)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr,size;
	
	printf("Enter size: ");
	scanf("%d",&size);
	
	arr = (int*)malloc(size * sizeof(int));
	
	if(arr == NULL)
	{
		printf("Memory is not allocatd");
	}
	
	printf("enter the array elements: ");
	for(int i=0; i< size ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("array elements are : ");
	for(int i =0; i<size ; i++)
	{
		printf(" %d", arr[i]);
	}
	
	free(arr);
}


--------------------------------------- QUESTION 3 ---------------------------------------------------
//dynamic string using malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	int size;
     
    printf("Enter string length: ");
    scanf("%d",&size);
    
    str = (char*)malloc((size + 1) * sizeof(char));
    
    if(str == NULL)
    {
    	printf("Memory not allocated\n");
    	
	}
	
	printf("Enter string : ");
	scanf("%s", str);
	
	printf("String is : %s\n",str);
	
	free(str);
	
}


--------------------------------------- QUESTION 4 ---------------------------------------------------
//Sum of array using malloc
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr,size;
	int sum = 0;
	
	printf("Enter the size: ");
	scanf("%d",&size);
	
	arr = (int*)malloc( size * sizeof(int));
	
	if(arr == NULL)
	{
		printf("Memory allocation failed here");
	}
	printf("Elements are : ");
	for(int i = 0 ; i<size ; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum+ arr[i];
	}
	
	printf("Sum = %d\n",sum);
	
	free(arr);
	
}
