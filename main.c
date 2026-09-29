#include <stdio.h>

int main(void) {
    int year, leap;

    printf("연도 입력: ");
    scanf("%d", &year);

    leap = (year % 4 == 0 && year % 100 != 0)
           || (year % 400 == 0);

    printf("%d\n", leap);
    return 0;
}