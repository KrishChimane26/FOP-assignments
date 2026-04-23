#include <stdio.h>

void swap_without_pointers(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (without pointers): a = %d b = %d\n", a, b);
}

void swap_with_pointers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap_without_pointers(a, b);
    printf("Original values after function call: a = %d b = %d\n", a, b);

    swap_with_pointers(&a, &b);
    printf("After swapping (with pointers): a = %d b = %d\n", a, b);

    return 0;
}
