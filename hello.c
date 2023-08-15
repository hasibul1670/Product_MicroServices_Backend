#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print left half of numbers
        for (int num = 1; num <= i; num++) {
            printf("%d", num);
        }

        // Print right half of numbers
        for (int num = i - 1; num >= 1; num--) {
            printf("%d", num);
        }

        printf("\n");
    }

    return 0;
}
