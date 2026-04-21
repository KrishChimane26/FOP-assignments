#include <stdio.h>

int main() {

    int a, i, prod;
    printf("Enter a number: ");
    scanf("%d", &a);
    i = 1;
    while(i <= 10) {
        prod = a * i;
        printf("%d * %d = %d\n", a, i, prod);
        i = i + 1;
    }
    return 0;
}
