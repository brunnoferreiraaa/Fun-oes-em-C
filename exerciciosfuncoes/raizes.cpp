#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    
    if (delta > 0) {
        float r1 = (-b + sqrt(delta)) / (2 * a);
        float r2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("Raizes: %.2f e %.2f\n", r1, r2);
    } 
	else if (delta == 0) {
        float r = -b / (2 * a);
        printf("Raiz unica: %.2f\n", r);
    } 
	else {
        printf("Nao existem raizes reais.\n");
    }
}

int main() {
    float a, b, c;
    
  
    scanf("%f %f %f", &a, &b,&c);
    calcularRaizes(a, b, c);
    return 0;
}
