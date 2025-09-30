#include <iostream>

using namespace std;

int conta_impar(int lista[], int tamanho){
    int qtd_impares = 0;
    for (int i = 0; i < tamanho ; i++){
        if (lista[i] % 2 == 1){
            qtd_impares += 1;
        }
    }
    return qtd_impares;
}

int main(){

    int tamanho;
    cout << "Informe o tamanho da lista: " << endl;
    cin >> tamanho;

    int lista[tamanho];

    cout << "Informe os elementos: " << endl;
    for (int i = 0; i < tamanho; i++){
        cin >> lista[i];
    }

    int quantos_impares = conta_impar(lista,tamanho);

    cout << "Sua lista tem " << quantos_impares << " números ímpar(es)" << endl;    
    return 0;
}