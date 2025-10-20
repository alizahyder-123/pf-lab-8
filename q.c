#include<stdio.h>

int main() {
    int rows, cols;
    int i;
    int j ;
    printf("Enter the number of branches (rows): ");
    scanf("%d", &rows);
    printf("Enter the number of products (columns): ");
    scanf("%d", &cols);

    int q1[rows][cols], q2[rows][cols], combined[rows][cols];

    printf("Enter sales data for Q1 (in thousands):\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Branch %d, Product %d: ", i + 1, j + 1);
            scanf("%d", &q1[i][j]);
        }
    }
    printf("Enter sales data for Q2 (in thousands):\n");
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Branch %d, Product %d: ", i + 1, j + 1);
            scanf("%d", &q2[i][j]);
        }
    }
    for  (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            combined[i][j] = q1[i][j] + q2[i][j];
        }
    }
    printf("\nCombined sales data for Q1 and Q2 (in thousands):\n");
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", combined[i][j]);
        }
        printf("\n");
    }

   
	return 0;
}
