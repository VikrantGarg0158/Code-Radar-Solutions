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
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    int zeros = countLeadingZeros(num);
    printf(zeros);
    return 0;
}