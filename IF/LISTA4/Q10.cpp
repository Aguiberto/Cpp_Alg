#include <iostream>

using namespace std;

int conta_exclusivos(int n, int lista[]){
    int qtd = n;
    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n ; j++){
            if(lista[i] == lista[j]){
                qtd -= 1;
                break;
            }
        }
    }
    return qtd;
}

int main(){

    int tamanho;
    cin >> tamanho;

    int lista[tamanho];

    for(int i = 0; i<tamanho ; i++){
        cin >> lista[i];
    }

    int contador = conta_exclusivos(tamanho,lista);

    cout << contador << endl;

    return 0;
}