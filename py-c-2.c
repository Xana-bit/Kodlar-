#include <stdio.h>

int main() {
    int number = 0;

    // 0'dan 100'e kadar sayıları yazdır
    while (number <= 100) {
        printf("%d\n", number);
        number++;
    }

    // Çift sayıları yazdır ve break kullan
    number = 0;
    while (number <= 100) {
        printf("%d\n", number);
        number += 2;
        if (number == 101) {
            break;
        }
    }

    // Sonsuz döngü ve break
    number = 0;
    while (1) {
        if (number % 2 == 0) {
            printf("%d\n", number);
        }
        if (number == 100) {
            break;
        }
        number++;
    }

    return 0;
}
