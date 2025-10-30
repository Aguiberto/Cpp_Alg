                             // ALGORITMO DE KADANE

#include <iostream>
                       
using namespace std;

int main(){

    int array[9] = {10,5,-17,20,50,-1,3,-30,10};

    int maior_final = array[0];
    int soma_elementos= 0;

    for(int i = 0; i < 9; i++){

        if(soma_elementos + array[i] < array[i]){
            soma_elementos = array[i];
        }else{
            soma_elementos += array[i];
        }

        if(soma_elementos > maior_final){
            maior_final = soma_elementos;
        }
    }
    cout << "A sub-lista contígua de soma máxima vale: " << maior_final << endl;

    return 0;
}