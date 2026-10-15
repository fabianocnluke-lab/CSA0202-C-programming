#include <stdio.h>
int main() {
    int total, x, y, ben, blackbeard, pirate;
    scanf("%d %d %d", &total, &x, &y);

    ben = total * x / 100;
    blackbeard = (total - ben) * y / 100;
    pirate = (total - ben - blackbeard) / 3;

    printf("%d\n%d\n%d\n", ben, blackbeard, pirate);
    return 0;
}
