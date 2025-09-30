#include <iostream>

using  namespace std;

int main (){

    float peso;
    float excesso;
    float multa;

    cout << "Informe a quantidade de peixe (Em KILOS) pescado: " <<"\n";
    cin >> peso;

    excesso = peso - 50;
    multa = excesso * 4;

    cout << "A multa sera de: " << multa << "\n";

    return 0;
}