#include <stdio.h>

int main() {
    int age;

    printf("Please give me your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else if (age < 16) {
        printf("You cannot get moto DL.\n");
    } else {
        printf("You are a minor.\n");
    }

    return 0;
}
