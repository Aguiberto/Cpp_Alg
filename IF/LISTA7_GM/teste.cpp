#include <iostream>

using namespace std;

int main(){

    int valor;
    cout << "informe o valor a ser removido: " << endl;
    cin >> valor;

    int array [5] = {10,20,30,40,50};
    int tamanho = 5;

    int indice = 0;

    for(int i = 0; i < tamanho; i++){
        if(array[i] == valor){
            indice = i;
            break;
        }
    }

    for(int i = indice; i < tamanho-1; i++){
        array[i] = array[i+1];
    }
    tamanho--;

    for(int i = 0; i < tamanho; i++){
        cout << array[i] << endl;
    }


   return 0;
}