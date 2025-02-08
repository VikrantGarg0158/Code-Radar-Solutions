#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    int zeros = countLeadingZeros(num);
    printf("%d", zeros);
    return 0;
}