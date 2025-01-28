#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers a and b : ");
    scanf("%d %d", &a, &b);
    if (b != 0)
    {
        printf("The division is %f\n", (float)a / b);
    }
    else

    {
        printf("Division by zero is not allowed\n");
    }
    return 0;
}