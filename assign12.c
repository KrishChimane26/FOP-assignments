#include <stdio.h>

int main()
{
int a, b, i;
printf("Calculate GCD and smallest common divisor of 2 numbers\n");
printf("Enter 1st number: ");
scanf("%d", &a);
printf("Enter 2nd number: ");
scanf("%d", &b);
for (i = 2; i <= a && i <= b; i++)
{
if (a % i == 0 && b % i == 0)
{
printf("Smallest common divisor = %d\n", i);
break;
}
}
for (i = a < b ? a : b; i >= 1; i--)
{
if (a % i == 0 && b % i == 0)
{
printf("Greatest common divisor (GCD) = %d\n", i);
break;
}
}
return 0;
}
