#include <stdio.h>
#include <math.h>


    int findLowestSetBitPosition(int n) {
        if (n == 0)
           return -1;
        return log2(n &-n);

    }
    int main {   
        int n;
        scanf("%d", &n);
        printf("%d\n",findLowestSetBitPosition(n))
         return 0;
}