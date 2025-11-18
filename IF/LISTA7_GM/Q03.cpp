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

void remove_value();

int main(){
    
    int array[5] = {10,20,30,40,50};
    int tamanho = 5;
    remove_indice(array,tamanho,2);

    for(int i = 0; i < tamanho; i++){
        cout << array[i] << endl;
    }

    return 0;
}