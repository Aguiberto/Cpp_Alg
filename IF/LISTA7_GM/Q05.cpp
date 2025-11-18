/*Método que tem recebe 2 listas e informa 
quantos elementos tem em comum nas duas listas*/

#include <iostream>

using namespace std;

int conta_comun(int arrayA[],int tamanhoA, int arrayB[],int tamanhoB){
    int contador = 0;
    for(int i = 0; i < tamanhoA; i++){
        for(int j = 0; j < tamanhoB; j++){
            if(arrayA[i] == arrayB[j]){
                contador++;
                break;
            }
        }
    }
    return contador;
}

int main(){

    int arrayA[10] = {20,10,40,30,99,2,3,67,0,7};
    int tamanhoA = 10;
    int arrayB[10] = {15,51,20,33,99,73,69,2,86,0};
    int tamanhoB = 10;

    int qtd_igual = conta_comun(arrayA,tamanhoA,arrayB,tamanhoB);

    cout << "A quantidade de numeros iguais sao: " << qtd_igual << endl;

    return 0;
}