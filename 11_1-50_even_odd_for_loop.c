#include <stdio.h>

int main()
{
    printf("Even numbers between 1-50:\n");
    for (int i = 2; i <= 50; i += 2)

    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("Odd numbers between 1-50:\n");
    for (int i = 1; i <= 50; i += 2)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}