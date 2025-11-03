#include <iostream>
#include <cmath>

using namespace std;

int eprimo(int n ){
    if( n <= 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    if(n > 2 && n % 2 == 0){
        return false;
    }
    for(int i = 3; i <= i*i;i+=2){
        if( n % i == 0){
            return false;
        }
    }
    return true;
}

int conta_primo(int n, int array[]){
    int qtd = 0;
    for(int i = 0; i < n; i++){
        if(eprimo(array[i]) == true){
            qtd += 1;
        }
    }
    return qtd;
}

int main(){

    int tamanho;
    cin >> tamanho;

    int array[tamanho];

    for(int i = 0; i < tamanho; i++){
        cin >> array[i];
    }

    int quantos = conta_primo(tamanho,array);

    cout << quantos << endl;

    return 0;
}