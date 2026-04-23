#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n");
    scanf("%d", &d);

    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);

    if (d == 1)
    {
        c = a + b;
        printf("The sum is = %d\n", c);
    }
    else if (d == 2)
    {
        c = a - b;
        printf("The difference is = %d\n", c);
    }
    else if (d == 3)
    {
        c = a * b;
        printf("The multiplication is = %d\n", c);
    }
    else if (d == 4)
    {
        if (b != 0)
        {
            c = a / b;
            printf("The division is = %d\n", c);
        }
        else
        {
            printf("Division by zero is not allowed\n");
        }
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}

