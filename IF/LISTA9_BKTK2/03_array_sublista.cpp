#include<iostream>
#include<vector>

using namespace std;

bool sub_lista(int *array, int tamanho, int soma, vector<int> & lista){

    if(soma == 0){
        return true;
    }
    if(soma < 0 or tamanho == 0){
        return false;
    }

    // adiciona o valor usado em uma lista
    lista.push_back(array[tamanho-1]);

    if(sub_lista(array, tamanho -1, soma - array[tamanho-1],lista)){
        return true;
    }

    /*Se o numero não é usado para formar a soma
    então ele é removido da lista*/
    lista.pop_back();

    /*Diminui a lista para ignorar o valor que
    não serve para formar a soma procurada*/
    return sub_lista(array, tamanho-1, soma, lista);
}

int main(){

    int tamanho, soma;
    cin >> tamanho >> soma;

    int *array = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin >> array[i];
    }

    vector<int> resultado;

    if(sub_lista(array, tamanho, soma, resultado)){
        for(int i = 0; i < resultado.size();i++){
            cout << resultado[i] << " " ;
        }
        cout << endl;
    } else {
        cout << 0 << endl;
    }

    delete[] array;

    return 0;

}