#include <stdio.h>

int main()
{
    int i = 2;
    printf("Even numbers between 1-50:\n");
    do
    {
        printf("%d\n", i);
        i += 2;

    } while (i <= 50);
    i = 1;
    printf("\nOdd numbers between 1-50:\n");
    do
    {
        printf("%d\n", i);
        i += 2;

    } while (i <= 50);
    return 0;
}