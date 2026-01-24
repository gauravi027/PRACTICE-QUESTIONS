------------Code to remove duplicate elements from array -------------
#include<stdio.h>
void main()
{
	int arr[100];
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	displayarray(arr,size);
	duplicate(arr,size);

}
void displayarray(int* ptr ,int size)
{
	printf("Enter the elements in array :\n");
	for(int i=0 ; i< size ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Elements in array are :\n");
	for(int i=0 ; i< size ; i++)
	{
		printf(" %d ",ptr[i]);
	}
}
void duplicate(int* ptr,int size)
{
	for(int i=0; i<size ; i++)
	{
		for(int j=i+1; j<size ;j++)
		{
			if(ptr[i] == ptr[j])
			{
				for (int k=j ; k<size-1 ; k++)
				{
					ptr[k] = ptr[k+1];
					
				}
				size= size-1; //reduces size
		        j = j-1; //recheck same position
			}
		}
		
	}
	printf("\nArray after removing duplicate elements will be :\n");
	for(int i=0; i<size ; i++)
	{
		printf(" %d ",ptr[i]);
	}
	printf("\n");
}
