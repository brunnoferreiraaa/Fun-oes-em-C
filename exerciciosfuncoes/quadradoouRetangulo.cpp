#include <stdio.h>

int ehQuadrado(int b, int h) {
    return b == h;  
}

int main() {
    int b, h;
    
    scanf("%d %d", &b, &h);
    
    if (ehQuadrado(b, h)) {
        printf("Eh um quadrado.\n");
    } else {
        printf("Eh um retangulo.\n");
    }
    return 0;
}
