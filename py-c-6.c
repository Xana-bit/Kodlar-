#include <stdio.h>

int main() {
    int hp;

    printf("Car HP: ");
    scanf("%d", &hp);

    if (hp < 60) {
        printf("Not give a price\n");
    } else if (hp > 60 && hp <= 75) {
        printf("Price: 200.000\n");
    } else if (hp > 75 && hp <= 90) {
        printf("Price : 350.000\n");
    } else if (hp > 90 && hp <= 110) {
        printf("Price : 500.000\n");
    } else if (hp > 110 && hp <= 150) {
        printf("Price : 700.000\n");
    } else if (hp > 150 && hp <= 200) {
        printf("Price : 1.200.000\n");
    } else {
        printf("Price : 2.000.000\n");
    }

    return 0;
}
