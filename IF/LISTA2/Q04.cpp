/*Algortimo que mostre a soma de dois
numeros consecuticos*/

/*
1. Criar uma variável soma_consecutivas
2. Definir essa variável como "maior"
3. Verificar se as somas posteriores são
maiores
4. Atualizar a variável*/

#include <iostream>

using namespace std;

int maior_consecutivo(int n, int array[]){

    int maior_soma = array[0] + array[1];

    for(int i = 1; i < n ; i++){
        
        int soma = array[i-1] + array[i];
        if(soma > maior_soma){
             maior_soma = soma;
        }
    }
    return maior_soma;
}

int main(){

    int tamanho;
    cin >> tamanho;

    int array [tamanho];

    for(int i = 0; i < tamanho; i++){
        cin >> array[i];
    }

    int maior = maior_consecutivo(tamanho,array);

    cout << maior << endl;

    return 0;
}