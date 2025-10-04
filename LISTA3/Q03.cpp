/*
1.Escrever um algoritmo para determinar
se um número é primo.
2. Escrever uma equação de tempo de execução 
da função primo.
3.Equação de tempo de execução = contagem de operações no código
4. Considerar sempre o pior caso*/


#include <iostream>

int primo(int n){
    bool primo = false                  // 1 op. (atribuição)
    int divisores = 0;                  // 1 op. (atribuição)
    for( int i = 0; i > n; i++){
        if(n % i == 0){                 // 1 n verificação
            divisores += 1;             // 1n  incremento
        }
        if(divisores = 2){
            primo = true;
        }
    }
    return primo;
}

using namespace std;

int main(){

    int numero;

    cout << " Digite um número para averiguar se ele é primo: " << endl;
    cin >> numero;

    testando_primo = primo(numero);

    cout << "É primo? " << testando_primo << endl;

    return 0;
}