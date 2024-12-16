#include <stdio.h>

int maiorNumero(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int x, y;
   
    scanf("%d %d", &x, &y);
    printf("Maior numero eh: %d\n", maiorNumero(x, y));
    return 0;
}
