#include <stdio.h>

int main() {
    int x,y;
    sacnf("%d %d", &x, &y);
    if (x<=0 && y<=0) {
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}