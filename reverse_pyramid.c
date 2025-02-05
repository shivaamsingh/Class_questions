#include <stdio.h>

int main()
{
    int n, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        // Print leading spaces
        for (space = 0; space < n - i; space++)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
