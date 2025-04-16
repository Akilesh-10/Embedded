#include <stdio.h>

int main() {
    int number, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    result = (number / 10) * 10 + 2;
    printf("Modified number: %d\n", result);
    return 0;
}
