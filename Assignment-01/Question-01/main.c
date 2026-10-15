#include <stdio.h>
int main() {
    float d, fare = 100;
    int member;
    scanf("%f %d", &d, &member);

    if (d > 10)
        fare += (d - 10) * 20;

    if (member)
        fare *= 0.9;

    printf("Final Fare: ₹%.0f\n", fare);
    return 0;
}
