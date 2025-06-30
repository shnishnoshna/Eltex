#include <stdio.h>

int main() {
    int n;
    unsigned int mask = 0b10000000000000000000000000000000;
    scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < 32; i++) {
        (n & mask) == mask ? count++ : count;
        mask = mask >> 1;
    }
    printf("%d", count);
    return 0;
}