--------------------------------------------------------------Hollow square-------------------------------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int i,j;
	
	for (i=1;i<=15;i++)
	{
		for(j=1;j<=15;j++)
		{
			if(i==1 || i==15 || j==1 || j==15 || i==j || i+j==16 || i%3==0)	//we do this whenever we want to print hollow square so here outline of the square will be printed in stars//
			{//here i==j will print diagonal line in this diagram//
				printf("* ");//space given to make the pattern look more visible easily// 
	        //here i+j=16 is to print another diagonal line as the diagonal point make pattern whose addition is equal to 16//
			//i%3==0 will divide line after 3 intervals//
			}
			else{
				//if(i<=8){
					//printf(". ");
				//}
				//else{
					printf("  ");
				}
			
		//	}

      ----------------------------------------------------------star pattern------------------------------------------------------------------------------------------------------
 #include<stdio.h>
void main(){
	int i,j;
	
	for (i=1;i<=15;i++)
	{
		for(j=1;j<=15;j++)
		{
			if(i==1 || i==15 || j==1 || j==15 || i+j==16 )	
			{
				if(i%4==0){
					printf("S ");
				}
				else
				{
					printf("* ");
					
				}
				
	     	}
			else{
				
					printf("  ");
				}
			
			
		
		}
			printf("\n");//to print proper pattern on new line//
	}
}
		
		}
			printf("\n");//to print proper pattern on new line//
	}
}

----------------------------------------------------------------------------Number pyramid pattern----------------------------------------------------------------------------
  #include<stdio.h>
void main(){
	int i,n;
	int num;
	
	printf("Enter num:");
	scanf("%d",&n);
	
	num=0;
	for(i=1;i<=n;i++)
	{
		num=num*10+1; //this builds pattern '1' becoz want to print pattern of 1 it can be '5' or '4' also//
		printf("%d",num);
		
		if(n>i)
		{
			printf("+");//Print in between nums//
		}
	}
}
--------------------------------------------------------------------------------star pattern--------------------------------------------------------------------------------
  #include<stdio.h>
void main(){
	int i,j;
for(i = 1; i <= 15; i++)
{
    for(j = 1; j <= 15; j++)
    {
        printf("* ");
    }
    printf("\n");
}

}
