#include <stdio.h>

int somaPares(int a, int b) {
    int soma = 0;
    for (int i = a + 1; i < b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int a, b;

    
    do {
        printf("Digite dois numeros (o primeiro deve ser menor que o segundo): ");
        scanf("%d %d", &a, &b);
        if (a >= b) {
            printf("Erro: o primeiro numero deve ser menor que o segundo. Tente novamente.\n");
        }
    } while (a >= b);

   
    printf("Soma dos numeros pares entre %d e %d: %d\n", a, b, somaPares(a, b));
    return 0;
}

