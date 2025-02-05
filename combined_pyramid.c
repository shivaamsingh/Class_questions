#include <stdio.h>

int main() {
    int i, j, rows;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars for the current row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
