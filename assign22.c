#include <stdio.h>
#include <string.h>
int main()
{
char str1[100], str2[100], temp[100];
int choice, length, result, i, len;
do
{
printf("\n----Menu----\n");
printf("1. Find length\n");
printf("2. Copy string\n");
printf("3. Concatenate strings\n");
printf("4. Compare strings\n");
printf("5. Reverse string\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Enter string: ");
scanf("%s", str1);
length = strlen(str1);
printf("Length = %d\n", length);
break;
case 2:
printf("Enter string: ");
scanf("%s", str1);
strcpy(temp, str1);
printf("Copied string = %s\n", temp);
break;
case 3:
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
strcat(str1, str2);
printf("Concatenated string = %s\n", str1);
break;
case 4:
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
result = strcmp(str1, str2);
if (result == 0)
printf("Strings are equal\n");
else
printf("Strings are not equal\n");
break;
case 5:
printf("Enter string: ");
scanf("%s", str1);
len = strlen(str1);
for (i = 0; i < len / 2; i++)
{
char t = str1[i];
str1[i] = str1[len - 1 - i];
str1[len - 1 - i] = t;
}
printf("Reversed string = %s\n", str1);
break;
case 6:
printf("Exiting...\n");
break;
default:
printf("Invalid choice!\n");
}
} while (choice != 6);
return 0;
}
