#include <iostream>

/*Programa que calcula o tempo de uma infecção de uma cidade
a partir da sua população
1. a infecção começa com um indivíduo
2. dobra a cada dia*/

using namespace std;

int infeccao(int populacao){
    int infectados = 1;
    int dias = 0;
    while( infectados <= populacao ){
        infectados *= 2;
        dias += 1;
    }
    return dias;
}

int main(){

    int pop;
    cin >> pop;

    int tempo_infeccao = infeccao(pop);
    
    cout << tempo_infeccao << endl;

    return 0;
}