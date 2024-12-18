#include <stdio.h>

int main() {
    int myVar = 0;

    while (myVar < 10) {
        if (myVar % 2 == 1) {
            printf("MyVar is : %d\n", myVar);
        } else {
            break;
        }
        myVar++;
    }
    printf("MyVar is : %d\n", myVar);

    return 0;
}
