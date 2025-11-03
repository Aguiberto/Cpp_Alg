#include <iostream>

using namespace std;

// contar e add em arrays os positivos
void contar_positivos(int lista_entrada[], int tamanho, int lista_positiva[], int &qtd_positivos){
    for(int i = 0; i < tamanho; i++){
        if(lista_entrada[i] > 0){
            lista_positiva[qtd_positivos] = lista_entrada[i];
            qtd_positivos += 1;
        }
    }
}

// contar e add em arrays os negativos
void contar_negativos(int lista_entrada[], int tamanho, int lista_negativa[], int &qtd_negativos){
    for(int i = 0; i < tamanho; i++){
        if(lista_entrada[i] < 0){
            lista_negativa[qtd_negativos] = lista_entrada[i];
            qtd_negativos += 1;
        }
    }
}


int main(){

    int tamanho_lista;
    cout << "informe o tamanho da lista: " << endl;
    cin >> tamanho_lista;

    int lista_entrada[tamanho_lista];
    
    int qtd_positivos = 0;
    int qtd_negativos = 0;

    int lista_positiva[tamanho_lista];
    int lista_negativa[tamanho_lista];

    cout << "Digite os elementos da lista: "<< endl;
    for(int i = 0; i < tamanho_lista; i++){
        cin >> lista_entrada[i];
    }

    contar_negativos(lista_entrada, tamanho_lista, lista_negativa, qtd_negativos);
    cout << "A quantidade de nº(s) negativos foi(ram): " << qtd_negativos << endl;
    for(int i = 0; i < qtd_negativos; i++){
        cout << lista_negativa[i] << " ";
    }
    cout << endl;

    contar_positivos(lista_entrada, tamanho_lista, lista_positiva, qtd_positivos);
    cout << "A quantidade de nº(s) positivos foi(ram): " << qtd_positivos << endl;
    for (int i = 0; i < qtd_positivos ; i++){
        cout << lista_positiva[i] << " ";
    }
    cout << endl;

    return 0;
}