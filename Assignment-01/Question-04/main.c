#include <stdio.h>
int main() {
    int d1, c1, d2, c2, total;
    scanf("%d %d %d %d", &d1, &c1, &d2, &c2);

    total = c1 + c2;
    printf("%d\n%d\n",
           d1 + d2 + total / 100,
           total % 100);
    return 0;
}
