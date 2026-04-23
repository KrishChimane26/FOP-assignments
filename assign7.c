# include <stdio.h>
struct student 
{
int roll;
char name [50];
float marks[5];
float total;
float percentage;
};
int main()
{
int n,i,j;
struct student s[100];
printf("Enter number of students:");
scanf("%d",&n);
for (i=0; i<n;i++)
{
printf("\n Enter details of student %d\n",i+1);
printf("Roll:");
scanf("%d",&s[i].roll);
printf("Name:");
scanf("%s",s[i].name);
s[i].total=0;
for(j=0;j<5;j++)
{
printf("Marks of subject %d:",j+1);
scanf("%f",&s[i].marks[j]);
s[i].total+=s[i].marks[j];
}
s[i].percentage=s[i].total/5;
}
printf("\nStudent Results:\n");
for (i=0;i<n;i++)
{
printf("\n Roll:%d\n",s[i].roll);
printf("Name: %s\n",s[i].name);
printf("Total: %.2f\n",s[i].total);
printf("Percentage:%.2f\n",s[i].percentage);
if (s[i].percentage>=50)
printf("Result:Pass\n");
else
printf("Result:Fail\n");
}
return 0;
}
