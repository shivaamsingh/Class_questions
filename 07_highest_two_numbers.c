#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers a and b : ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("The highest number is %d\n", a);
    }
    else
    {
        printf("The highest number is %d\n", b);
    }
    return 0;
}