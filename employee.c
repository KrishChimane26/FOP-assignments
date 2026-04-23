#include <stdio.h>

int main() 
{
    float basic, hra, ta, gross_salary, prof_tax, net_salary;

    printf("Enter basic pay: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;          
    ta  = 0.05 * basic;          

    gross_salary = basic + hra + ta;

    prof_tax = 0.02 * gross_salary;   

    net_salary = gross_salary - prof_tax;

    printf("\nBasic Pay        : %.2f", basic);
    printf("\nHRA (10%%)        : %.2f", hra);
    printf("\nTA (5%%)          : %.2f", ta);
    printf("\nGross Salary     : %.2f", gross_salary);
    printf("\nProfessional Tax : %.2f", prof_tax);
    printf("\nNet Salary       : %.2f", net_salary);

    return 0;
}

