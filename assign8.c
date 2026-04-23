#include <stdio.h>

int main() 
{
    int marks[5], i;
    int total = 0;
    float percentage;
    int pass = 1;

    printf("Enter marks of 5 subjects:\n");

    for (i = 0; i < 5; i++)
     {
        scanf("%d", &marks[i]);

        if (marks[i] < 40) 
        {
            pass = 0;
        }
        total += marks[i];
    }

    printf("\nTotal Marks: %d\n", total);

    if (pass == 0) {
        printf("Result: FAIL\n");
    }
     else
      {
        percentage = total / 5.0;

        printf("Result: PASS\n");
        printf("Aggregate Percentage: %.2f%%\n", percentage);

        if (percentage >= 75) 
        {
            printf("Grade: Distinction\n");
        } 
        else if (percentage >= 60)
         {
            printf("Grade: First Division\n");
        } 
        else if (percentage >= 50) 
        {
            printf("Grade: Second Division\n");
        }
         else if (percentage >= 40) 
         {
            printf("Grade: Third Division\n");
        }
    }

    return 0;
}

