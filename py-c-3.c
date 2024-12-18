#include <stdio.h>

int main() {
    // İç içe for döngüsü
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            printf("%d,%d\n", i, j);
        }
    }

    // Çarpım tablosu
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            int mult = i * j;
            printf("%d x %d = %d\n", i, j, mult);
        }
    }

    return 0;
}
