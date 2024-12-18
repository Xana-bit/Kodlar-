#include <stdio.h>

int main() {
    int how_much, real_estate;
    char car;

    int threshold_money = 100000;
    int threshold_house = 5;

    printf("How much money do you have in your bank account? ");
    scanf("%d", &how_much);
    printf("How many houses do you have in Kötekli? ");
    scanf("%d", &real_estate);
    printf("Do you have a car? (y/n): ");
    scanf(" %c", &car);

    if (how_much > threshold_money && real_estate > threshold_house) {
        if (car == 'y' || car == 'Y') {
            printf("You don't have to work all day long.\n");
        } else {
            printf("You should buy a car bro.\n");
        }
    } else if (how_much > 50000 && (car == 'y' || car == 'Y')) {
        printf("You have to work one day in a week!\n");
    } else {
        printf("You are so poor you have to work to live.\n");
    }

    return 0;
}
