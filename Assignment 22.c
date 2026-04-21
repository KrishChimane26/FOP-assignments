#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Compare Strings (strcmp)\n");
        printf("2. Concatenate Strings (strcat)\n");
        printf("3. Length of String (strlen)\n");
        printf("4. Copy String (strcpy)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

       
        if (choice >= 1 && choice <= 4) {
            printf("Enter string 1: ");
            scanf("%[^\n]", str1);
            getchar(); 

          
            if (choice == 1 || choice == 2) {
                printf("Enter string 2: ");
                scanf("%[^\n]", str2);
                getchar(); 
            }
        }

        switch (choice) {
            case 1:
                
                if (strcmp(str1, str2) == 0) {
                    printf("Result: Strings are equal\n");
                } else {
                    printf("Result: Strings are not equal\n");
                }
                break;

            case 2:
                
                strcat(str1, str2);
                printf("Result: Concatenated string: %s\n", str1);
                break;

            case 3:
               
                printf("Result: Length of string 1 is: %lu\n", strlen(str1));
                break;

            case 4:

                strcpy(str2, str1);
                printf("Result: String copied. New str2 is: %s\n", str2);
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
