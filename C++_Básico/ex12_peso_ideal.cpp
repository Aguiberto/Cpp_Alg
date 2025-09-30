#include <iostream>

using namespace std;

int main(){

    float altura;
    float peso_ideal;

    cout << "Informe sua altura: " << "\n";
    cin >> altura;

    peso_ideal = 72.7 * altura - 58;

    cout << "Seu peso ideal é: " << peso_ideal << "\n";

    return 0;
}