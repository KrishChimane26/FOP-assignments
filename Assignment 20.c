#include <stdio.h>

void swapwithoutpointers(int a, int b);
void swapwithpointers(int *p, int *q);

int main() {
    int a, b;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\n--- Without Pointers ---\n");
    swapwithoutpointers(a, b);

    printf("Result in main after swapWithoutPointers: a = %d, b = %d\n", a, b);

    printf("\n--- With Pointers ---\n");

    swapwithpointers(&a, &b);

    printf("Result in main after swapWithPointers: a = %d, b = %d\n", a, b);

    return 0;
}

void swapwithoutpointers(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside function: a = %d, b = %d\n", a, b);
}

void swapwithpointers(int *p, int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("Inside function: *p = %d, *q = %d\n", *p, *q);
}

