#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);
    if (ch == 'a' || ch=='e' || ch=='i' || ch == 'o' || ch == 'u' || ch == 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("Vowel");
    }
    else if (ch>=0 && ch<=9) {
        printf("digit");
    }
    else if (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') {
        printf("Constant");
    }
    else {
        printf("special character");
    }
    return 0;
}