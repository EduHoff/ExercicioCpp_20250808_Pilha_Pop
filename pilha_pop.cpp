#include <iostream>
#include "portable_utils.h"
#define TAM 10

using namespace std;

void imprimir_vetor(int vetor[TAM]){
    cout << "\n";
    for(int i = 0; i < TAM; i++){
        if(i != TAM -1){
            cout << vetor[i] << " - ";
        }else{
            cout << vetor[i];
        }
    }
}

void pilha_push(int pilha[TAM], int valor, int *topo) {
    if (*topo == TAM - 1) {
        cout << "\nPilha cheia";
    }else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void pilha_pop(int pilha[TAM], int *valorRetirado, int *topo){

    if(*topo == -1){
        cout << "\nA pilha ja esta vazia";
        *valorRetirado = -1;
    }else{
        *valorRetirado = pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }

}


int main(){

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;
    int valorRetirado=0;

    Clear();
    imprimir_vetor(pilha);

    for (int i=1; i<=11; i++) {
        pilha_push(pilha, i, &topo);
        imprimir_vetor(pilha);
    }

    cout << "\n--------------------------------------------------";


    for (int i=11; i>=1; i--) {
        pilha_pop(pilha,&valorRetirado,&topo);
        if (valorRetirado != -1) {
            cout << "\nValor retirado: " << valorRetirado;
        }
        imprimir_vetor(pilha);
    }

    return 0;
}
