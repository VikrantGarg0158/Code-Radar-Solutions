#include <stdio.h>

int main() {
    int x;
    printf("enter integer:\n", x);
    scanf("%d", &x);
    if (x%2==0){
        printf("Even");
    }
    else{
        printf("Odd")
    }
    return 0;
}