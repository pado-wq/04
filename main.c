#include <stdio.h>

int main(void) {
    int x = 2, z = 1;
    int a = 3, b = 4, c = 5;
    int y, m;

    y = a * x * x + b * x + c;
    m = (x + y + z) / 3;

    printf("y=%d, m=%d\n", y, m);
    return 0;
}