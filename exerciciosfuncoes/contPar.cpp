#include <stdio.h>

int contarPares(int a, int b, int c) {
    int cont = 0;
    if (a % 2 == 0) cont++;
    if (b % 2 == 0) cont++;
    if (c % 2 == 0) cont++;
    return cont;
}

int main() {
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Quantidade de numeros pares: %d\n", contarPares(a, b, c));
    return 0;
}
