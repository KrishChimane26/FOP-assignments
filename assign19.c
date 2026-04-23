#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    char doj[20];
    float salary;
};

int main() {
    int n, i, male = 0, female = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE e[n];

    for(i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter designation: ");
        scanf(" %[^\n]", e[i].designation);

        printf("Enter gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Enter date of joining: ");
        scanf("%s", e[i].doj);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("Total Employees: %d\n", n);

    for(i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male: %d\nFemale: %d\n", male, female);

    printf("Employees with salary more than 10000:\n");
    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }

    printf("Employees with designation Asst Manager:\n");
    for(i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0)
            printf("%s\n", e[i].name);
    }

    return 0;
}
