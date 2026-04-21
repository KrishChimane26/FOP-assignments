#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;

    srand(time(0));

    printf("Enter how many random numbers (n): ");
    scanf("%d", &n);

    i = 0;

    while (i < n) {
        printf("%d\n", rand());
        i++;
    }

    return 0;
}

