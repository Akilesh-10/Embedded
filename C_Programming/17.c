#include <stdio.h>

int main() {
    int number, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    result = number - (number % 10);
    printf("Modified number: %d\n", result);
    return 0;
}
