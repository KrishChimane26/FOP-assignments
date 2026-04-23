#include <stdio.h>
unsigned long long fact_non_recursive(int n)
{
unsigned long long fact = 1;
int i;
for (i = 1; i <= n; i++)
fact *= i;
return fact;
}
unsigned long long fact_recursive(int n)
{
if (n == 0 || n == 1)
return 1;
else
return n * fact_recursive(n - 1);
}
int main()
{
int n;
printf("Enter a number (0-20 for accuracy): ");
scanf("%d", &n);
if (n < 0 || n > 100)
{
printf("Invalid input\n");
return 0;
}
printf("Factorial (Non-Recursive): %llu\n", fact_non_recursive(n));
printf("Factorial (Recursive): %llu\n", fact_recursive(n));
return 0;
}
