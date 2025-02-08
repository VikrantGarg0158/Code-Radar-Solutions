#include <stdio.h>

int main() {
    int number, n;
    scanf("%d", &number);
    printf("Enter the bit position (0-based): ");
    scanf("%d", &n);

    int updated_number = number | (1 << n);

    printf("Updated number: %d\n", updated_number);

    return 0;
}