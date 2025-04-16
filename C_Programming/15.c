#include <stdio.h>

int main() {
    int number, d1, d2, d3, d4, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    d1 = number / 1000;              // thousands
    d2 = (number / 100) % 10;        // hundreds
    d3 = (number / 10) % 10;         // tens
    d4 = number % 10;                // ones

    result = d2 * 1000 + d1 * 100 + d3 * 10 + d4;
    printf("Modified number: %d\n", result);
    return 0;
}
