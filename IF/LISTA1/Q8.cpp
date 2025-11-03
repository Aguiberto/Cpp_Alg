/*Algoritmo para determinar o MDC 
entre 2 valores*/

#include <iostream>

using namespace std;

    // Algoritmo de Euclides
    int alg_euclides(int ValorA, int ValorB){

        while(ValorB != 0){
        int resto = ValorA % ValorB;
        ValorA = ValorB;
        ValorB = resto;
        
        }
        return ValorA;
    }

int main(){

    setlocale(LC_ALL,"portuguese");

    int ValorA, ValorB;

    cout << "Digite 2 números separados por espaço para saber o MDC: ";
    cin >> ValorA >> ValorB;

    cout << "O MDC entre eles é: " << alg_euclides(ValorA,ValorB) << "\n";

    cin.ignore();
    cin.get();

    return 0;
}