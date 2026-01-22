#include<iostream>

bool sublista(int *lista, int tamanho, int soma){

    int resposta;

    if(soma == 0){
        return true;
    }
    if(soma < 0 || tamanho == 0){
        return false;
    }

    resposta = sublista(lista, tamanho - 1, soma - lista[tamanho - 1]);
    resposta = resposta || sublista(lista, tamanho -1, soma);

    return resposta;
}

int main(){

    using namespace std;

    int *lista;
    int tamanho;
    int soma;

    cin >> tamanho >> soma;
    lista = new int[tamanho];

    for(int i = 0; i < tamanho; i++){
        cin >> lista[i];
    }

    int resultado;
    if (sublista(lista, tamanho,soma)){
        resultado = 1;
    }else{
        resultado = 0;
    }

    cout << resultado;

    delete [] lista;
    return 0;
}