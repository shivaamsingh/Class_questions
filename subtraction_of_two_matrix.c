#include <stdio.h>


int main() {
    int i, j;
    int matrix1[3][3]={{10,20,30},
                        {40,50,60},
                        {70,80,90}};
    int matrix2[3][3]={{10,10,10},
                        {20,20,20},
                        {30,30,30}};
    int result[3][3];
    printf("Subtraction of two matrix = \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
            printf("%3d ", result[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}