#include <stdio.h>
int main() {
    int units, basic, i;
    float charge, amount, total_amount;
    for (i = 1; i <= 70; i++) {
        printf("*");
    }
    printf("\n");
    printf(" WELCOME TO \n");
    printf(" ⚡ Maharashtra State Electricity Distribution Company Limited ⚡\n");
    for (i = 1; i <= 70; i++) {
        printf("*");
    }
    printf("\n");
    printf("\n");
    printf("⦿ Enter the Number of Units Consumed:");
    scanf("%d", &units);
    basic = 100;
    if (units <= 100) {
        amount = units * 3.36;
        charge = 20;
    } else if (units <= 300 && units > 100) {
        amount = units * 7.34;
        charge = 30;
    } else if (units <= 500 && units > 300) {
        amount = units * 10.37;
        charge = 40;
    } else if (units <= 1000 && units > 500) {
        amount = units * 11.86;
        charge = 50;
    } else if (units > 1000) {
        amount = units * 12;
        charge = 60;
    } else {
        printf("Invalid input");
    }
    printf("\n");
    for (i = 1; i <= 70; i++) {
        printf("-");
    }
    printf("\n");
    printf(" electricity Bill:₹%.2f\n", total_amount);
    for (i = 1; i <= 70; i++) {
        printf("-");
    }
    return 0;
}
