#include <stdio.h>

void moverCavalo(int casas) {
     
    if (casas > 0) {
        printf("DIREITA, CIMA\n");
        moverCavalo(casas - 1);
    }
    
}

int main () {
    moverCavalo(1);
    return 0;
}