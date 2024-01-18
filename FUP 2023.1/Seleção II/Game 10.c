#include <stdio.h>

int main() {
    int n, d, a, dist;

    scanf("%d %d %d", &n, &d, &a);

    if (a <= d) {
        dist = d - a;
    } else {
        dist = (n - a) + d;
    }

    int clicks = dist % (n-1);

    printf("%d\n", clicks);

    return 0;
}
