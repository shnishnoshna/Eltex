#include <stdio.h>

int main() {
    int n, insert_number;
    scanf("%d%d", &n, &insert_number);
    unsigned char *ptr = (char *)&n;
    printf("%d\n", n);
    for(int i = 0; i < sizeof(n); i++){
        *ptr = i == 2 ? insert_number : *ptr;
        printf("%d ", *ptr++);
    }
    printf("\n%d", n);
    return 0;
}