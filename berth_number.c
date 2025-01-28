#include <stdio.h>

int main()
{
    int n;

    printf("Enter the berth number:");
    scanf("%d", &n);
    if (n % 8 == 1 || n % 8 == 4)
        printf("Lower berth");
    else if

        (n % 8 == 2 || n % 8 == 5)
        printf("Middle berth");

    else if

        (n % 8 == 3 || n % 8 == 6)
        printf("Upper berth");

    else if (n % 8 == 7)
    {
        printf("Side lower");
    }
    else
        printf("Side upper");

    return 0;
}