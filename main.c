#include <stdio.h>

int main(void) {
    int x, y;

    printf("정수 두 개 입력: ");
    scanf("%d %d", &x, &y);

    if (y == 0) {
        printf("0으로는 나누거나 나머지를 구할 수 없습니다.\n");
        return 1;
    }

    printf("+ result is %d\n", x + y);
    printf("- result is %d\n", x - y);
    printf("* result is %d\n", x * y);
    printf("/ result is %d\n", x / y);
    printf("%% result is %d\n", x % y);

    return 0;
}