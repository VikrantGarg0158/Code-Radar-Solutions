#include <stdio.h>

int main() {
    int number, position;
    scanf("%d %d", &number, &position);
    int result = number & ~(1 << position);
    printf("%d\n", result);
    return 0;
}