#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    if(x==y && x==z) {
        printf("Equilatral");
    }
    else if (x!=y && x!=z) {
        printf("Scalene");
    }
    else {
        printf("Isosceles");
    }
    return 0;
}