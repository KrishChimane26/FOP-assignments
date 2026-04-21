#include <stdio.h>

int main() {
    int n, rev, dig;

    printf("Enter a number: ");
    scanf("%d", &n);
    rev = 0;

    while (n > 0) {
        dig = n % 10; 
        rev = (rev * 10) + dig;    
        n = n / 10;                
    }

    printf("Reversed number = %d", rev);

    return 0;
}
