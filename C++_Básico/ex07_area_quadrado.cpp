#include <iostream>

using namespace std;

int main(){

    float lado;
    float area_dobrada;

    cout << " Informe o tamanho do lado do quadrado: " << "\n";
    cin >> lado;

    area_dobrada = (lado * lado) * 2;

    cout << "Sua área dobrada vale: " << area_dobrada << "\n";

    return 0;
}