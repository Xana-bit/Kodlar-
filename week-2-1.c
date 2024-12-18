#include <stdio.h>

int main() {
    int number1 = 10;
    int number2 = 3;

    int sum = number1 + number2;
    int modulo = number1 % number2;

    printf("Sum: %d, and Modulo: %d\n", sum, modulo);
    printf("Address int: %p \n", (void*)&sum);
    printf("Address hex: %x \n", (unsigned int)&sum);

    return 0;
}
