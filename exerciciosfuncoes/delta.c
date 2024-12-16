#include <stdio.h>

float calcularDelta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

int main() {
    float a, b, c;
    printf("Digite o valor de a, b e c: ");
    
    scanf("%f %f %f", &a, &b, &c);
    printf("Delta: %.2f\n", calcularDelta(a, b, c));
    return 0;
}
