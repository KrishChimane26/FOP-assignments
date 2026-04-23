# include <stdio.h>
int main()
{
    int n , i, a[100];
    printf(" Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter integers :");
    for (i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Even no. are:");
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
        {
            printf("%d",a[i]);
        }
    }
    printf("\n odd no. are :");
    for (i=0;i<n;i++)
    {
        if (a[i]%2!=0)
        {
            printf("%d", a[i]);
        }
    }
    return 0;
}
