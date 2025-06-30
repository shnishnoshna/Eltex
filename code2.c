#include <stdio.h>

int main() {
    int n;
    unsigned int mask = 0b10000000000000000000000000000000;
    scanf("%d", &n);
    for(int i = 0; i < 32; i++) {
        (n & mask) == mask ? printf("1") : printf("0");
        mask = mask >> 1;
    }
    return 0;
}