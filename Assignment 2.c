#include <stdio.h>

int main() {

    float a, b, result;
    int choice;

    printf("Simple Calculator\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

  
    if(choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
    }
    else if(choice == 5) {
        printf("Exiting program...");
        return 0;
    }
    else {
        printf("Invalid choice");
        return 0;
    }

    
    switch(choice) {

        case 1:
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case 4:
            if(b == 0)
                printf("N.D.");
            else {
                result = a / b;
                printf("Result = %.2f", result);
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
