#include <iostream>

int index(int lista[], int tamanho, int procurado){
    int indice = -1;
    for (int i = 0; i < tamanho; i++){
        if (lista[i] == procurado){
            indice = i;
            break;
        }
    }
    return indice;
}

using namespace std;

int main(){

    unsigned int tamanho;
    cout << "Informe o tamanho da lista: " << "\n";
    cin >> tamanho;

    int lista [tamanho];

    cout<<"Digite os elementos da lista"<<"\n";
    for (int i = 0; i<tamanho; i++){
        cin >> lista[i];
    }

    unsigned int buscar;
    cout << "Informe o número que você deseja o indice: " << "\n";
    cin >> buscar;

    int indice = index(lista,tamanho,buscar);

    cout << "o índice procurado é: " << indice << endl;

    return 0;
}