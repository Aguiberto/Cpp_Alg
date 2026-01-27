#include <iostream>
#include <vector>

/*Esse método consiste em ordenar um array
usando um array auxiliar*/

void ordenacao_selecao(int num[], int tam){

    int min,aux;

    for(int i = 0; i < tam-1; i++){

        min = i;
        
        //Procura o menor valor no array
        // Grava o índice do menor valor
        for(int j = i+1; j < tam; j++){

            /*Percorre a lista e verifica se o número é menor que se antecessor*/
            if (num[j] < num[min]){
                min = j;
            }
        }

        /* Ordaniza o array adicionando o menor valor 
        no índice correto (ORDENA: em ordem crescente)*/
        if(num[i] != num[min]){
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }

    }
}


int main(){

using namespace std;

int tamanho;
cin >> tamanho;

int *lista = new int[tamanho];

for(int i = 0; i< tamanho; i++){
    cin >> lista[i];
}

ordenacao_selecao(lista, tamanho);

for(int i = 0; i < tamanho; i++){
    cout << lista[i] << " ";

}

cout << endl;

delete[] lista;

return 0;

}