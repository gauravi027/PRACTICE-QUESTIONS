------------------------------------------ Question 1 ------------------------------------------------------
#include <stdio.h>
#include <string.h>

void main()
{
	char str[] = "Hello";
    int len = strlen(str);

    printf("Length = %d", len);

}

------------------------------------------ Question 2 ------------------------------------------------------
#include<stdio.h>
#include<string.h>
void main()
{
	char src[] = "C Language";
    char dest[20];

    strcpy(dest, src);

    printf("Source is: %s\n",src);
    printf("\nCopied string: %s\n", dest);

}

------------------------------------------ Question 3 ------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main()
{
  char a[] = "Apple";
  char b[] = "Apple";

  int result = strcmp(a, b);

  if(result == 0)
  {
  	 printf("Strings are equal");
  }
  else
  {
  	printf("Strings are not equal");
  }
}

------------------------------------------ Question 4 ------------------------------------------------------

#include <stdio.h>
#include <string.h>

void main()
{
	char s1[20] = "Hello ";
    char s2[] = "World";

    strcat(s1, s2);

    printf("%s", s1);

}
