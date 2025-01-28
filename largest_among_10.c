#include <stdio.h>

int main()
{
    int num, largest;
    printf("Enter number 1: ");
    scanf("%d", &largest);
    for (int i = 2; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > largest)
        {
            largest = num;
        }
    }
    printf("The largest number among the ten entered is:%d\n", largest);
    return 0;
}