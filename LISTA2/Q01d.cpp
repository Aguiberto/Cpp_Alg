#include <iostream>

using namespace std;

int menor_elemento(int a[], int n){
    int menor_valor = a[0];
     for (int i = 0; i < n; i++){
        if ( a[i] < menor_valor){
            menor_valor = a[i];
        }
     }
    return menor_valor;
}

int main(){

    int tamanho;
    cin >> tamanho;

    int lista[tamanho];

    for (int i = 0; i < tamanho ; i++){
        cin >> lista[i];
    }

    int menor_da_lista = menor_elemento(lista,tamanho);
    cout << menor_da_lista << endl;

    return 0;
}