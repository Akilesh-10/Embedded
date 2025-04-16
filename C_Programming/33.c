#include <stdio.h>

int main() {
    int a, b, bigger, sum;
    printf("Enter two 2-digit numbers: ");
    scanf("%d %d", &a, &b);

    bigger = (a > b) ? a : b;
    sum = (bigger / 10) + (bigger % 10);

    printf("Sum of digits of bigger number: %d\n", sum);
    return 0;
}
