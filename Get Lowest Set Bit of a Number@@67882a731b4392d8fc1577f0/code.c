#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The number is 0, it has no set bits.\n");
        return 0;
    }

    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }

    printf("Position of the lowest set bit: %d\n", position);

    return 0;
}