#include <stdio.h>

int main() {
    int number1, number2;

    printf("Please give me number1: ");
    scanf("%d", &number1);
    printf("Please give me number2: ");
    scanf("%d", &number2);

    int sum = number1 + number2;
    int mod = number1 % number2;

    printf("Sum: %d, and Modulo: %d\n", sum, mod);

    return 0;
}
