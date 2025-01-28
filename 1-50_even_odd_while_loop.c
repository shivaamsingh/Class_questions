#include <stdio.h>

int main()
{
    int i = 1;
    printf("Even numbers between 1-50:\n");
    while (i <= 50)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    i = 1;
    printf("Odd numbers between 1-50:\n");
    while (i <= 50)
    {
        if (i % 2 != 0)

            printf("%d\n", i);

        i++;
    }

    return 0;
}