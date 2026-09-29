#include <stdio.h>

int main(void) {
    unsigned int x;
    int count;

    printf("숫자 입력: ");
    scanf("%u", &x);

    for (count = 0; x != 0; x >>= 1) {
        if (x & 1) {
            count++;
        }
    }

    printf("The result is : %d\n", count);
    return 0;
}