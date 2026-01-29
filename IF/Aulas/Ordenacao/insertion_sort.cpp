#include<iostream>


void insertion_sort(int array[], int tamanho){

    for(int i = 0; i < tamanho; i++){
        
        int escolhido = array[i];
        // Variavel que serve como auxiliar na lógica do código
        // Recebe um valor do array que posteriormente será comparado com seu antecessor


        int j = i -1;

        while ( j >= 0 and array[j] > escolhido){
        // Verifica se o escolhido é menor que seu antecessor
        
            array[j+1] = array[j];
            // joga o maior valor para frente (para ordenação)
            j = j - 1;
            // auxilia na lógica de modificação dos elementos
        }

        array[j+1] = escolhido;
        // jogar o elemento da vez(menor valor) para trás ordenando o array
        
    }
        
}

int main(){

    using namespace std;

    int tamanho;
    cin >> tamanho;

    int *lista = new int(tamanho);
    for(int i = 0; i < tamanho ; i++){
        cin >> lista[i];
    }

    insertion_sort(lista, tamanho);

    for(int j = 0; j < tamanho; j++){
        cout << lista[j] << " ";
    }

    cout << endl ;

    return 0;

}