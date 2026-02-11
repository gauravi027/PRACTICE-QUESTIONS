#include<stdio.h>
#include<stdlib.h>
void somefunc();
void main()
{
	printf("Start of the program\n");
	for(int i = 1; i<=5 ;i++)
	{
		somefunc();
	}
	printf("Ended program successfullyyy!!!!!");
}
void somefunc()
{
	int* p = malloc(20);
	printf("Address of p is %u\n",p); //keeps adress unique without repeating it//
	p[0] = 10;
	printf("%d \n",p[0]);
	
	
	
	free(p); //address repeats for few values// 
	//after using this the program doesnt crash for big amount of memory it ends the program successfully
}
