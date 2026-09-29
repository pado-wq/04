#include <stdio.h>

int main(void) {
    int total, hours, minutes, seconds;

    printf("초 입력: ");
    scanf("%d", &total);

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("%d : %02d : %02d\n", hours, minutes, seconds);
    return 0;
}