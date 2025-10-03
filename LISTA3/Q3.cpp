/*
1.Escrever um algoritmo para determinar
se um número é primo.
2. Escrever uma equação de tempo de execução 
da função primo.
3.Equação de tempo de execução = contagem de operações no código
4. Considerar sempre o pior caso*/


#include <iostream>
#include <string>

using namespace std;



string primo(int n){
    string primo = "FALSE";            // 1 atribuição
    int divisores = 0;                 // 1 atribuição
    for( int i = 1; i <= n; i++){      
        if(n % i == 0){				   // 1n (comparação por vola de laço)
            divisores += 1;            // 1n (por incremento)
        }
    }
    if(divisores == 2){            	   // 1 comparação
        primo = "TRUE";			       // 1 atribuição
    }
    return primo;					   // 1 retorno
}                      			 	   // total = 2n + 5
int main(){

    int numero;
    string testando_primo;

    cout << " Digite um número para averiguar se ele é primo: " << endl;
    cin >> numero;

    testando_primo = primo(numero);

    cout << "É primo? " << testando_primo << endl;

    return 0;
}
