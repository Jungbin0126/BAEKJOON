#include <stdio.h>
#include <math.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int l, a, b, c, d, freeday;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
    freeday = l - max(ceil(((float)a/c)), ceil(((float)b/d)));
    printf("%d", freeday);
    return 0;
}