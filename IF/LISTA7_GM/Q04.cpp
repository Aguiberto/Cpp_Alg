/*Programa para adicionar um método que remove
um elemento de um array*/
  
/*Reduzir o array pela metade quando sua 
capacidade chegar a 1/4*/

#include <iostream>

using namespace std;

void remove_esp(int array[], int &tamanho, int &capacidade, int index){

    for(int i = indice; i < tamanho; i++){
        array[i] = array[i+1];
    }
    tamanho--;
    if(tamanho <= tamanho/4){
        capacidade = capacidade/2;
        int *novo_array = new int[capacidade];
        for(int i = 0; i < tamanho/4; i++){
            novo_array[i] = array[i];
        } 
        int *array_antigo = array;
        array = novo_array;
        delete [] array_antigo;
    }
}

int main(){

   int arrayA [10] = {10,23,63,80,24,75,93,42,2,6};
   int tamanho = 10;
   int capacidade = 20;



    return 0;
}