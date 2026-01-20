
---------------------------------------question 1------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    char op;
    int a, b;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(op) {
        case '+':
            printf("Result = %d", a + b);
            break;
        case '-':
            printf("Result = %d", a - b);
            break;
        case '*':
            printf("Result = %d", a * b);
            break;
        case '/':
            if(b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero not allowed");
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
------------------------------question2------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected Tea");
            break;
        case 2:
            printf("You selected Coffee");
            break;
        case 3:
            printf("You selected Juice");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
------------------------------------------------question3--------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }
    return 0;
}
----------------------------------------question4-----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    char ch = 'b';

    switch(ch) {
        case 'a':
            printf("Apple\n");
        case 'b':
            printf("Ball\n");
        case 'c':
            printf("Cat\n");
        default:
            printf("Done\n");
    }
    return 0;
}
