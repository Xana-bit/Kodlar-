#include <stdio.h>

int main() {
    int a = 5;
    printf("a: %d\n", a);
    int b = a++;
    printf("b: %d\n", b);
    int c = ++a;
    printf("c: %d\n", c);

    return 0;
}
