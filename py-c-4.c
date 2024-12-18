#include <stdio.h>

int main() {
    int number1 = 1;
    while (number1 < 6) {
        int number2 = 1;
        while (number2 < 6) {
            printf("%d x %d = %d\n", number1, number2, number1 * number2);
            number2 += 1;
        }
        number1 += 1;
        printf("\n");
    }
    return 0;
}