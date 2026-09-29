#include <stdio.h>

int main(void)
{
    int total, minutes, seconds;

    printf("Enter seconds: ");
    scanf("%d", &total);

    minutes = total / 60;
    seconds = total % 60;

    printf("%d:%02d\n", minutes, seconds);

    return 0;
}
