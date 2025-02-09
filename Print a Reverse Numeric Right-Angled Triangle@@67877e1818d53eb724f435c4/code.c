#include <stdio.h>

int main() {
    int n;

    // Input the number of rows
    scanf("%d", &n);

    // Iterate through rows
    for (int i = 1; i <= n; i++) {
        // Print numbers in reverse order from i down to 1
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        // Move to the next line after each row is complete
        printf("\n");
    }

    return 0;
}