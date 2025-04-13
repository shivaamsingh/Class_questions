#include <stdio.h>

int main()
{
    int length, width, area, perimeter;
    printf("Enter the length of the land : ");
    scanf("%d", &length);
    printf("Enter the width of the land : ");
    scanf("%d", &width);
    perimeter = 2 * (length + width);
    area = length * width;
    printf("The perimeter of the land is %d\n", perimeter);
    printf("The area of the land is %d\n", area);

    return 0;
}