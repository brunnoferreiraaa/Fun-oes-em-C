#include <stdio.h>

void imprimirDivisores(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite um número positivo: ");
    scanf("%d", &n);
    printf("Divisores de %d: ", n);
    imprimirDivisores(n);
    return 0;
}
