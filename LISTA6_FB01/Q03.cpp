                             // ALGORITMO DE KADANE

#include <iostream>
                       
using namespace std;

int main(){

    int array[9] = {10,5,-17,20,50,-1,3,-30,10};

    int maior_final = array[0];
    int soma_elementos= 0;

    for(int i = 0; i < 9; i++){

        if(soma_elementos + array[i] < array[i]){

            /*verifica se o a variável soma_elementos
            mais o proximo elemento da lista é maior que a soma.*/

            soma_elementos = array[i];
            /*se o proximo elemento da lista for maior que a soma
            atualiza a variável soma_elementos para ser o proximo elemento da lista
            (maior)*/

        }else{
            soma_elementos += array[i];
            /*se o proximo elemento da lista não for maior que a soma 
            da variável com soma_elemento com o elemento da lista
            é feito o incremento do elemento seguinte do array*/
        }

        if(soma_elementos > maior_final){
            /*verifica qual variável é maior e atualiza*/
            maior_final = soma_elementos;
        }
    }
    cout << "A sub-lista contígua de soma máxima vale: " << maior_final << endl;

    return 0;
}