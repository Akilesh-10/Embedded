#include <stdio.h>

int main() {
    int a, b, h1, o1, h2, o2, s1, s2, target, sum = 0;
    printf("Enter two 3-digit numbers: ");
    scanf("%d %d", &a, &b);

    h1 = a / 100;
    o1 = a % 10;
    s1 = h1 + o1;

    h2 = b / 100;
    o2 = b % 10;
    s2 = h2 + o2;

    target = (s1 > s2) ? a : b;

    sum += target / 100;
    sum += (target / 10) % 10;
    sum += target % 10;

    printf("Sum of all digits: %d\n", sum);
    return 0;
}
