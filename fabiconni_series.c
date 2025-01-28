#include <stdio.h>

int main()
{
    int a = 1, b = 1, next = 0;
    printf("%d %d ", a, b);
    while (next <= 150)
    {
        next = a + b;
        if (next <= 150)
        {
            printf("%d ", next);
        }
        {
            a = b;
            b = next;
        }
    }
    {
        printf("\n");
    }

    return 0;
}