 #include <stdio.h>

int main() {
    int choice, i;
    double x, y, result;
    int n;
    long long fact = 1;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5) {
        printf("Enter x and y: ");
        scanf("%lf %lf", &x, &y);
    } else if (choice == 6) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }

    switch (choice) {
        case 1:
            printf("Result = %.2lf\n", x + y);
            break;

        case 2:
            printf("Result = %.2lf\n", x - y);
            break;

        case 3:
            printf("Result = %.2lf\n", x * y);
            break;

        case 4:
            if (y != 0)
                printf("Result = %.2lf\n", x / y);
            else
                printf("Division by zero not allowed\n");
            break;

        case 5:
            result = 1;
            for (i = 1; i <= (int)y; i++)
                result *= x;
            printf("Result = %.2lf\n", result);
            break;

        case 6:
            for (i = 1; i <= n; i++)
                fact *= i;
            printf("Result = %lld\n", fact);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

