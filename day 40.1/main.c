#include <stdio.h>

int main(void) {
    int a[10][10];
    int i, j, r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    for(int line = 1; line <= (r + c - 1); line++) {
        int start_col = line > r ? line - r : 0;
        int count = line > c ? c - start_col : line - start_col;
        for(int j = 0; j < count; j++) {
            int row = (line - 1) - j;
            int col = start_col + j;
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }

    return 0;
}
