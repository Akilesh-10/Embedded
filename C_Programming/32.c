#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two 2-digit numbers: ");
    scanf("%d %d", &a, &b);

    if (a + b < 100)
        printf("Output: %d\n", a + b);
    else
        printf("Output: %d\n", a - b);
    
    return 0;
}
