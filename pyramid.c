#include <stdio.h>
int main(){
    int i, j, k, spc ,n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (spc = 1; spc <= n - i; spc++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*", j);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("*", k);
        }
        printf("\n");
    }
    return 0;
}