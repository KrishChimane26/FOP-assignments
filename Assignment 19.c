#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    char doj[15]; // Date of Joining
    float salary;
};

void processEmployeeData(struct EMPLOYEE emp[], int n) {
    int male_counter = 0;
    int female_counter = 0;
    int asst_manage_counter = 0;
    int i;

    printf("\n--- Processing Results ---\n");
    printf("Employees with salary > 10,000:\n");

    for (i = 0; i < n; i++) {
        
        if (emp[i].gender == 'M' || emp[i].gender == 'm') {
            male_counter++;
        } else if (emp[i].gender == 'F' || emp[i].gender == 'f') {
            female_counter++;
        }

        if (emp[i].salary > 10000) {
            printf("- %s\n", emp[i].name);
        }

        if (strcmp(emp[i].designation, "Asst Manager") == 0) {
            asst_manage_counter++;
        }
    }

    printf("\nTotal Employees: %d\n", n);
    printf("Male Employees: %d\n", male_counter);
    printf("Female Employees: %d\n", female_counter);
    printf("Assistant Managers: %d\n", asst_manage_counter);
}

int main() {
    int n, i;

    printf("Enter number of employees (n): ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Employee %d ---\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Designation (e.g., Asst Manager): ");
        scanf(" %[^\n]", emp[i].designation); // Reads string with spaces
        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);
        printf("Date of Joining (DD/MM/YYYY): ");
        scanf("%s", emp[i].doj);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    processEmployeeData(emp, n);

    return 0;
}
