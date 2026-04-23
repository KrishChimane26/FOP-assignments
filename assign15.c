#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int n, i;
printf("Enter how many random no. you want: ");
if (scanf("%d", &n) != 1) 
{
return 1;
}
srand(time(0));
for (i = 1; i <= n; i++)
{
printf("%d\n", rand());
}
return 0;
}
