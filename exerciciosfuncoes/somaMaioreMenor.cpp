#include <stdio.h>

int somaMaioreMenor(int a, int b, int c) {
    int maior = a, menor = a;

   
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    return maior + menor;
}

int main() {
    int a, b, c;
   
    scanf("%d %d %d", &a, &b, &c);

    printf("Soma do maior com o menor: %d\n", somaMaioreMenor(a, b, c));
    return 0;
}

