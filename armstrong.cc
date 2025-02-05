#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, remainder, n = 0;
    double result = 0.0;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate the sum of digits raised to the power of n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the sum equals the original number
    return (int)result == num;
}

int main() {
    int start, end;

    // Input range
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}