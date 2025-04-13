#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number n : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number is even:%d\n", n);
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}