#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int flipped_num = ~num;
    printf("Flipped number: %d\n", flipped_num);
    return 0;
}