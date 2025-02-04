#include <stdio.h>

int main() {
    int x,y, calculation;
    char op;
    scanf("%d %d %c", &x, &y, &op);
    if (op=='+') {
        calculation = x + y;
    }
    else if (op=='-') {
        calculation = x-y;
    }
    else if (op=='*') {
        calculation = x*y;
    }
    else if (op=='/') {
        if(y!=0) {
            calculation = x/y;
        }
        else {
            printf("Error");
            return 1;
        }
    }
    else {
        printf("Error");
        return 1;
    }
    printf("%d", calculation);
    return 0;
}
