#include <stdio.h>

long long recursiveFactorial(int n);
long long factorialIterative(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
     
        printf("Recursive Factorial of %d is: %lld\n", num, recursiveFactorial(num));

        printf("Iterative Factorial of %d is: %lld\n", num, factorialIterative(num));
    }

    return 0;
}

long long recursiveFactorial(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    } else {
        
        return (n * recursiveFactorial(n - 1));
    }
}
long long factorialIterative(int n) {
    int i = 1;
    long long result = 1; 
    while (i <= n) {
        result = result * i;
        i++;
    }
    return result;
}
