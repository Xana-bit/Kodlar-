#include <stdio.h>

int main() {
    // 0'dan 100'e kadar tüm sayıları yazdır
    for (int i = 0; i < 101; i++) {
        printf("%d\n", i);
    }

    // 0'dan 100'e kadar çift sayıları yazdır
    for (int i = 0; i < 101; i += 2) {
        printf("%d\n", i);
    }

    // 0'dan 100'e kadar çift sayıları if kullanarak yazdır
    for (int i = 0; i < 101; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    // break kullanımı
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d\n", i);
    }

    // continue kullanımı
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
