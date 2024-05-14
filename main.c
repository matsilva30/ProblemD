#include<stdio.h>


int myrand () {
    static int valor = 45;
    valor = 73 * valor + 2713;
    valor = (valor % 101);
    return (valor%4);
}


int ultimo_visto(int salas[], int mod, int cont){


if(salas[1]!=mod)
    for(int k= 0 ; k<3;k++ ){
        salas[k]= salas[k+1];
    }

    salas[3]=mod;

    cont ++;

    return cont;
}



int main (){

int cont_LRU =0;
int LRU;
int n;
int mod;
int k;
int salas[4];

scanf("%d/n", &n);

int modelos[4];
int sala[4]={1,2,3,4};

for(k=0;k<n;k++){

    scanf("%d/n", &mod);
    if(mod<=10 && mod>=1){
        modelos[k]=mod;
    }
    LRU = ultimo_visto(salas,mod,LRU);



}



return 0;


}
