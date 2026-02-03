#include <iostream>

/*IDEIA USADA: 

    Os valores do array vão dimunuindo o valor da soma
    até que essas subtrações chegem exatamente a 0, se passar 
    de 0 então não chegar a 0 e o array não tiver mais valores
    para subtrair então não é possivel somar os valores da lista 
    para chegar ao valor desejado.

 */

int qtd_sublista(int *array, int tamanho, int soma){

    // variável para resultado
    int resultado = 0;

    // verifica se existe a soma
    if(soma == 0){
        return 1;
    }
    // verifica se o array chegou ao fim ou não há resultados possíveis
    if( soma < 0 or tamanho == 0){
        return 0;
    }

    resultado = qtd_sublista(array, tamanho -1, soma - array[tamanho-1])
                + qtd_sublista(array, tamanho-1, soma);

    return resultado;
}

int main(){

    using namespace std;

    int tamanho, soma;
    cin >> tamanho >> soma;

    int *array = new int[tamanho];
    for(int i = 0; i < tamanho ; i++){
        cin >> array[i];
    }

    cout << qtd_sublista(array, tamanho, soma) << endl;

    delete[] array;

    return 0;
}