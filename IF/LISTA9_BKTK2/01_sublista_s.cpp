#include<iostream>

bool soma_sublista(int *array, int tamanho, int soma){
    int resultado;
    if(soma == 0){
        return true;
    }

    // 
    if(soma < 0 or tamanho == 0){
        return false;
    }

    resultado = soma_sublista(array, tamanho -1, soma - array[tamanho-1]) 
                or soma_sublista(array, tamanho -1, soma);

    return resultado;

}

int main(){

    using namespace std;

    int tamanho, soma;
    cin >> tamanho >> soma;

    int *array = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin >> array[i];
    }

    bool sub_lista = soma_sublista(array, tamanho, soma);

    cout << sub_lista << endl;

    return 0;

}