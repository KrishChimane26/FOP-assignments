#include <stdio.h>
int main()
{
int binary, decimal = 0, base = 1, rem;
printf("Enter a binary no.: ");
scanf("%d", &binary);
while (binary > 0)
{
rem = binary % 10;
decimal = decimal + (rem * base);
base = base * 2;
binary = binary / 10;
}
printf("Decimal equivalent = %d\n", decimal);
return 0;
}
