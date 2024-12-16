#include <stdio.h>

float PA(int a1, int an, int n) {
    return n * (a1 + an) / 2.0;
}

int main() {
    int a1, an, n;
   
    scanf("%d %d %d", &a1, &an, &n);
    printf("Soma dos %d primeiros termos: %.2f\n", n, PA(a1, an, n));
    return 0;
}
