#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *f1, *f2;
char sname[100], dname[100];
int ch;
printf("Enter source file name: ");
scanf("%s", sname);
printf("Enter destination file name: ");
scanf("%s", dname);
f1 = fopen(sname, "r");
if (f1 == NULL)
{
printf("Error: Could not open source file %s\n", sname);
return 1;
}
f2 = fopen(dname, "w");
if (f2 == NULL)
{
printf("Error: Could not create destination file %s\n", dname);
fclose(f1);
return 1;
}
while ((ch = fgetc(f1)) != EOF)
{
fputc(ch, f2);
}
printf("File copied successfully.\n");
fclose(f1);
fclose(f2);
return 0;
}
