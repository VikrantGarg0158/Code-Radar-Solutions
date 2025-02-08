#include <stdio.h>

int countTrailingZeros(unsigned int n) {
    int count = 0;
    while (n > 0 && n % 2 == 0) {
        count++;
        n /= 2;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    int zeros = countTrailingZeros(num);
    printf("%d\n", zeros);
    return 0;
}