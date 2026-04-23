#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], rev[100];
    int i, len = 0;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    while (str1[len] != '\0')
    {
        len++;
    }
    printf("length of string = %d\n", len);

    for (i = 0; i < len; i++)
    {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';
    printf("reversed string = %s\n", rev);

    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    if (strcmp(str1, rev) == 0)
        printf("palindrome\n");
    else
        printf("Not a palindrome\n");

    if (strstr(str1, str2) != NULL)
        printf("Second string is substring of first string \n");
    else
        printf("Not a substring\n");

    return 0;
}
