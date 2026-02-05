#include<iostream>

void merge(int array[],int inicio1, int final1, int inicio2, int final2){

    int tamanho = ((final1 - inicio1) + (final2 - inicio2) + 2);
    int *temp = new int[tamanho];

    int i, j, k;

    i = inicio1;
    j = inicio2;
    k = 0;

    /*Aqui acontece a ordenação  de fato*/
    while(i <= final1 && j <= final2){
    /*While roda até que tenha sido feita a leitura
    de todos os valores de alguma das metades do array*/

        // Compara os valores de cada metade do array
        if(array[i] <= array[j]){

            temp[k++] = array[i++];
            /*Se o valor na primeira metade for menor então:
             1. o array temporário vai receber esse valor
             2. Índice K (indice_i do array temporário aumenta)
             3. índice I aumenta e o valor de comparação do indice_i array será o proximo*/
        }else{
            /*Caso o menor valor seja da segunda metade do array:
            1. Aumenta Adiciona o valor na segunda metade do do array no array temporário
            2. Incrementa o índice do array temporário 
            3. Muda o índice da segunda metade do array segundo array*/
            temp[k++] = array[j++];
        }
    }
    /* Loops "CleanUP" que adicionam os valores que sobraram
    no final do array temporário*/

    /*Esse trecho é executado quando sobram 
    valores da PRIMEIRA metade*/
    while(i <= final1){
        temp[k++] = array[i++];
    }

    /*Esse trecho é executado quando sobram 
    valores da SEGUNDA metade*/
    while (j <= final2){
        temp[k++] = array[j++];
    }
    
    /*Devolve os valores do array temporário para o array original.*/
    for(int p = 0; p < tamanho ; p++){
        array[inicio1 + p] = temp[p];
    }

    delete[] temp;

}

void sort_merg(int array[], int indice_i, int indice_f){
/*Os parâmetro são: 1. O array ser ordenado | 2. 1º e Ultimos índice do array*/

    int meio;

    if(indice_i < indice_f){
    // se tiver ordenado o algoritmo pode prosseguir

        meio = (indice_i + indice_f) / 2;
        sort_merg(array, indice_i, meio);
        sort_merg(array, meio+1, indice_f);
        merge(array, indice_i,meio,meio+1,indice_f);
    }


}

int main(){

    using namespace std;

    int tamanho;
    cin >> tamanho;

    int *array_de_teste = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin >> array_de_teste[i];
    }

    cout << "Array Natural:" << endl;
    for(int i = 0; i < tamanho; i++){
        cout<< array_de_teste[i] << " ";
    }
    cout << endl;

    sort_merg(array_de_teste, 0, tamanho-1);

    cout << "Array ordenado:"<< endl;
    for(int i = 0; i < tamanho; i++){
        cout<< array_de_teste[i] << " ";
    }
    cout << endl;

    return 0;
}