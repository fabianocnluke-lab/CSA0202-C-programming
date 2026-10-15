#include <stdio.h>
int main() {
    int exp, performance;
    scanf("%d %d", &exp, &performance);

    if (exp > 7 && performance >= 85)
        printf("Level: Senior");
    else if (exp >= 3 && performance >= 80)
        printf("Level: Mid-Level");
    else
        printf("Level: Junior");

    return 0;
}
