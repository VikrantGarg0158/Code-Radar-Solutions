#include <stdio.h>

int main() {
    int x;
    scan("%d", &x);
    if (x & 1) {
        printf("Set");
    }
    else {
        printf("Not Set");
    }
    return 0;
}