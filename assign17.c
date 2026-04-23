#include <stdio.h>
#include <math.h>
int main()
{
int n, i, j;
float x, sum = 0;
printf("Enter value of x (in radians): ");
scanf("%f", &x);
printf("Enter number of terms: ");
scanf("%d", &n);
for(i = 0; i < n; i++)
{
float fact = 1.0;
for(j = 1; j <= (2 * i + 1); j++)
{
fact = fact * j;
}
float term = (pow(-1, i) * pow(x, 2 * i + 1)) / fact;
sum = sum + term;
}
printf("Sum of sine series = %f\n", sum);
return 0;
}
