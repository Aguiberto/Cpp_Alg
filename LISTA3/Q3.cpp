/*
1.Escrever um algoritmo para determinar
se um n�mero � primo.
2. Escrever uma equa��o de tempo de execu��o 
da fun��o primo.
3.Equa��o de tempo de execu��o = contagem de opera��es no c�digo
4. Considerar sempre o pior caso*/


#include <iostream>
#include <string>

using namespace std;



string primo(int n){
    string primo = "FALSE";            // 1 atribui��o
    int divisores = 0;                 // 1 atribui��o
    for( int i = 1; i <= n; i++){      
        if(n % i == 0){				   // 1n (compara��o por vola de la�o)
            divisores += 1;            // 1n (por incremento)
        }
    }
    if(divisores == 2){            	   // 1 compara��o
        primo = "TRUE";			       // 1 atribui��o
    }
    return primo;					   // 1 retorno
}                      			 	   // total = 2n + 5
int main(){

    int numero;
    string testando_primo;

    cout << " Digite um n�mero para averiguar se ele � primo: " << endl;
    cin >> numero;

    testando_primo = primo(numero);

    cout << "� primo? " << testando_primo << endl;

    return 0;
}
