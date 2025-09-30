#include <iostream>

using namespace std;

int main(){

    float altura;
    float peso_homem;
    float peso_mulher;

    cout << " Informe sua altura para saber o seu peso ideal: " << "\n";
    cin >> altura;

    peso_homem = (72.7 * altura) - 58;
    peso_mulher = (62.1 * altura) - 44.7;

    cout << "Peso ideal para HOMEM: " << peso_homem << "\n";
    cout << "Peso ideal para MULHER: " << peso_mulher << "\n";

    return 0;
}