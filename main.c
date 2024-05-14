#include <stdio.h>

int FIFO(int salas[], int mod, int cont) {

    if(salas[0] != mod && salas[1] != mod && salas[2] != mod && salas[3] != mod) {
        for(int k = 0; k < 3; k++) {
            salas[k] = salas[k + 1];
        }
        salas[3] = mod;
        cont++;

    }
    return cont;
}

int myrand () {
    static int valor = 45;
    valor = 73 * valor + 2713;
    valor = (valor % 101);
    return (valor%4);
}

int main() {

    int n, mod;
    
    scanf("%d\n", &n);

    int salasLRU[4] = {1, 2, 3, 4};
    int LRU = 0;

    for(int k = 0; k < n; k++) {
        scanf("%d\n", &mod);
        if(mod <= 10 && mod >=1) {
            LRU = FIFO(salasLRU, mod, LRU);
        }
    }

    printf("FIFO : %d\n", LRU);

    return 0;
}
