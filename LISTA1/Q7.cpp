/*Determinar se dois valores 
são primos entre sí - pode ser
feito com o ALGARISMO DE EUCLIDES*/

/* Verificar se há algum divisor 
divisor em comum além do 1*/


#include <iostream>

using namespace std;

int mdc(int a, int b){
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main(){

    setlocale(LC_ALL,"portuguese");

    int ValorA, ValorB;

    cout << "Digite dois números separados por espaço para verificar se é primo: ";
    cin >> ValorA >> ValorB;


    if (mdc(ValorA,ValorB) == 1) {
        cout << ValorA << " e " << ValorB << " são PRIMOS entre si. " << endl;
    } else {
        cout << ValorA << " e " << ValorB << " Não são primos entre si" ;
    }

    cin.ignore();
    cin.get();

    return 0;
}