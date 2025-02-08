#include <stdio.h>

int main() {
    int decimal_num;
    scanf("%d", &decimal_num);

    if (decimal_num == 0) {
        printf("0");
    } else {
        int binary_digits[32];
        int i = 0;

        while (decimal_num > 0) {
            binary_digits[i] = decimal_num & 1;
            decimal_num >>= 1;
            i++;
        }

        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary_digits[j]);
        }
    }
    printf("\n");
    return 0;
}