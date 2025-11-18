/*Criar um método para remover um elemento
da lista*/

/*Os elementos tem que ser removidos um por vez
mesmo que haja elementos repetidos*/

/*A remoção pode ser feita tanto pelo valor
quando pelo índice*/

#include <iostream>

using namespace std;

void remove_indice(int array[],int &tamanho, int indice){
    for(int i = indice; i < tamanho-1; i++){
        array[i] = array[i+1];
    }
    tamanho--;
}

void remove_value(int array[],int &tamanho, int valor){
    int procurado;
    for(int i = 0; i<tamanho;i++){
        if(array[i] == valor){
            procurado = i;
            break;
        }
    }
    if(procurado >= 0){
    remove_indice(array,tamanho,procurado);
    }
}

int main(){
    
    int arrayA[5] = {10,20,30,40,50};
    int tamanhoA = 5;
    remove_indice(arrayA,tamanhoA,2);

    for(int i = 0; i < tamanhoA; i++){
        cout << arrayA[i] << endl;
    }

    int arrayB[5] = {1,2,3,4,5};
    int tamanhoB = 5;

    remove_value(arrayB,tamanhoB,3);

    for(int i = 0; i < tamanhoB; i++){
        cout << arrayB[i] << endl;
    }

    return 0;
}