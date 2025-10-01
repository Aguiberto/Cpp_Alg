#include <iostream>

using namespace std;

void conta_pares(int lista_teste[],int n, int lista_par[], int &qtd_pares){
    for (int i = 0; i < n ; i++){
        if(lista_teste[i] % 2 == 0){
            lista_par[qtd_pares] = lista_teste[i];
            qtd_pares += 1;
        }
    }
}

int main (){
   
    int tamanho;
    cout << "informe o tamanho da lista: "<< endl;
    cin >> tamanho;

    int qtd_pares = 0;
    int lista_teste[tamanho];
    int lista_par[tamanho];


    cout << "Digite os elementos da lista: "<<endl;
    for(int i = 0; i < tamanho; i++){
        cin >> lista_teste[i];
    }
    conta_pares(lista_teste,tamanho,lista_par,qtd_pares);
    if(qtd_pares > 0){
       cout << "A quantidade de Nº pares foi: " << qtd_pares << endl; 
       for(int i = 0; i < qtd_pares; i++){
        cout << lista_par[i] << " ";
       }
    cout << endl;
    }
    else{
        cout << "Não há numeros pares na lista!" << endl;
    }
    
    return 0;
}