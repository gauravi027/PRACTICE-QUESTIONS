-------------------------------------------------------------------------- Menu driven -----------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], copy[100];
    int choice;

    while (1)  // keeps menu running
    {
        printf("\n----- MENU -----\n");
        printf("1. Enter string\n");
        printf("2. Find length\n");
        printf("3. Copy string\n");
        printf("4. Reverse string\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter string: ");
                scanf("%99s", str); //99s prevents from buffering overflow
                break;

            case 2:
                printf("Length of string = %lu\n", strlen(str));
                break;

            case 3:
                strcpy(copy, str);
                printf("Copied string = %s\n", copy);
                break;

            case 4:
                strrev(str);   
                printf("Reversed string = %s\n", str);
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
