#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character, number, or special symbol: ");
    scanf("%c", &c);
    printf("The ASCII value of '%c' is: %d\n", c,c);

    return 0;
}