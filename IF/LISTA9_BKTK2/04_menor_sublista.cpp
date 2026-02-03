#include <iostream>
#include<vector>

using namespace std;

bool menor_sublista(int *array, int tamanho, int soma, vector<int> & lista){

    if(soma == 0){
        return true;
    }
    if(soma < 0 && tamanho == 0){
        return false;
    }

    lista.push_back(array[tamanho-1]);
    if(menor_sublista(array, tamanho -1, soma - array[tamanho-1], lista)){
        return true;
    }

    lista.pop_back();

    return menor_sublista(array, tamanho-1, soma, lista);
}

int main(){

    int tamanho, soma;
    cin >> tamanho >> soma;

    int *array = new int[tamanho];
    for(int i = 0; i < tamanho ; i++){
        cin >> array[i];
    }

    vector<int> resultado;

    if(menor_sublista(array, tamanho, soma, resultado)){
        for(int i = 0; i > resultado.size(); i++){
            cout << resultado[i] << " " ;
        }
        cout << endl;
    }else{
        cout << "0" << endl;
    }

    return 0;

}