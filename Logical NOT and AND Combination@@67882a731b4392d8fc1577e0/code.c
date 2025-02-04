#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    if (!(x>y)&&!(y>x)) {
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}