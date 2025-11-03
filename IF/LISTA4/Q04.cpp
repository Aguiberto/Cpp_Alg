#include <iostream>

using namespace std;

int sublista(int n, int lista[]){
    
    int fracao = 1;
    int maior_fracao = 0;

    for (int i = 1; i < n-1;i++){
        if(lista[i] >= lista[i-1]  ){
            fracao += 1;
        } else {
            if(fracao > maior_fracao){
                maior_fracao = fracao;
            }
        fracao = 1;
        }
    }
    if (fracao > maior_fracao){
        maior_fracao = fracao;
    }
    return maior_fracao;
}

int main(){

    int tamanho;
    cin >>  tamanho;

    int lista[tamanho];

    for(int i = 0; i < tamanho; i++){
        cin >> lista[i];
    }

    int maior_sublista = sublista(tamanho, lista);

    cout << maior_sublista<< endl;

    return 0;
}