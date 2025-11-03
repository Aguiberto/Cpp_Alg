#include <iostream>

using namespace std;

void soma_na_lista(int n, int lista [], int procurado){

    int soma = 0;
  

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            soma = lista[i] + lista[j];
            if(soma == procurado){
                cout << "S" << endl;
               return; // funciona com um break, encerrando a função
            } 
        }
    }
    cout << "N" << endl; // caso chegue até aqui significa que não encontrou o valor desejado
}

int main(){

    int tamanho;
    cin >> tamanho;

    int lista[tamanho];

    for(int i = 0; i < tamanho; i++){
        cin >> lista[i];
    }

    int procurar;
    cin >> procurar;

    soma_na_lista(tamanho,lista,procurar);

    return 0;
}