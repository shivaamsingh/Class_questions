#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 0; i <= 50; i += 2) {
        sum += i;
    }
    printf("Sum of all even numbers from 0 to 50 is: %d\n", sum);
    return 0;
}