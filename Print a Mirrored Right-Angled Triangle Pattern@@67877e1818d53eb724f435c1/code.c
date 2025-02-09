#include <stdio.h>

int main() {
    int n;

    // Input the number of rows
    scanf("%d", &n);

    // Iterate through rows
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int star = 1; star <= i; star++) {
            printf("*");
        }
        // Move to the next line after each row is complete
        printf("\n");
    }

    return 0;
}