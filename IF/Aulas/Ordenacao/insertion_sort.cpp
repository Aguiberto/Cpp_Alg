#include<iostream>


void insertion_sort(int array[], int tamanho){

    for(int i = 0; i < tamanho; i++){
        
        int escolhido = array[i];
        int j = i -1;

        while ( j >= 0 and array[j] > escolhido){
        
            array[j+1] = array[j];
            j = j - 1;
        }

        array[j+1] = escolhido;
        
    }
        
}

int main(){

    using namespace std;

    int tamanho;
    cin >> tamanho;

    int *lista = new int(tamanho);
    for(int i = 0; i < tamanho ; i++){
        cin >> lista[i];
    }

    insertion_sort(lista, tamanho);

    for(int j = 0; j < tamanho; j++){
        cout << lista[j] << " ";
    }

    cout << endl ;

    return 0;

}