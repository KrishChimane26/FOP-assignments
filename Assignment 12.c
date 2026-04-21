#include <stdio.h>

int main() {
    int a, b, i, gcd = 1, scd = 1;
    char ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter choice:\n");
    printf("g - GCD\n");
    printf("s - SCD\n");
    scanf(" %c", &ch);

    switch(ch) {
        case 'g':   // GCD
            for(i = 1; i <= a && i <= b; i++) {
                if(a % i == 0 && b % i == 0)
                    gcd = i;
            }
            printf("GCD = %d", gcd);
            break;

        case 's':   // SCD
            for(i = 2; i <= a && i <= b; i++) {
                if(a % i == 0 && b % i == 0) {
                    scd = i;
                    break;
                }
            }
            printf("SCD = %d", scd);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
