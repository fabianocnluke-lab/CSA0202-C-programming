#include <stdio.h>
int main() {
    float p, r, y, interest, amount, discount, final;
    scanf("%f %f %f", &p, &r, &y);

    interest = p * r * y / 100;
    amount = p + interest;
    discount = interest * 0.02;
    final = amount - discount;

    printf("%.2f\n%.2f\n%.2f\n%.2f\n",
           interest, amount, discount, final);
    return 0;
}
