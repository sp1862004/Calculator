// Calculator 

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulus(int a, int b);

int main() {
    int num1, num2, choice;
    char cont = 'y';  

    while (cont != 'q') {
        printf("\nMenu:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1:
                printf("Result: %d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Result: %d - %d = %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Result: %d * %d = %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if (num2 != 0) {
                    printf("Result: %d %% %d = %d\n", num1, num2, modulus(num1, num2));
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

        printf("\nDo you want to continue? (press 'q' to quit or any other key to continue): ");
        scanf(" %c", &cont);
    }

    printf("Program exited successfully.\n");

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulus(int a, int b) {
    return a % b;
}
