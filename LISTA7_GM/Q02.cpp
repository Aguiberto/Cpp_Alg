#include <iostream>

/*Programa que tem uma função para mostrar 
o índice de um número buscado em um array*/

using namespace std;

int indexation(int array[],int tamanho, int num){
    
    for(int i = 0; i < tamanho; i++){
        if(array[i] == num){
            return i;
        }
    }
    return -1;
}

int main(){

    int num;
    cout << " Digite o numero a ser procurado: "<< endl;
    cin >> num ;

    int tamanho;
    cout << " Digite o tamanho do array: "<< endl;
    cin >> tamanho ;

    int array [tamanho];
    for(int i = 0; i < tamanho; i++){
       cin >> array[i];
    }

    int indice = indexation(array, tamanho,num);

    cout <<"O indice procurado vale: " << indice << endl;

    return 0;
}