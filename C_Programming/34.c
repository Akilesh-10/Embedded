#include <stdio.h>

int main() {
    int a, b, t1, t2, h, o, diff;
    printf("Enter two 3-digit numbers: ");
    scanf("%d %d", &a, &b);

    t1 = (a / 10) % 10;
    t2 = (b / 10) % 10;

    if (t1 > t2) {
        h = a / 100;
        o = a % 10;
    } else {
        h = b / 100;
        o = b % 10;
    }

    diff = o - h;
    if (diff < 0) diff = -diff;

    printf("Difference: %d\n", diff);
    return 0;
}
