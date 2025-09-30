#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num1, num2;
    float num3;
    float calculo, calculo2, calculo3;

    cout << "Informe 3 numeros para um calculo doido: " << "\n";
    cin >> num1 >> num2 >> num3;

    calculo = (2*num1) * (num2 / 2);
    calculo2 = 3*num1 + num3;
    calculo3 = pow(num3,3);

    cout << " O produto do dobro pelo primeiro com metade do segundo: " << calculo << "\n";
    cout << " A soma do triplo do primeiro com o terceiro: " << calculo2 << "\n";
    cout << " O cubo do terceiro: " << calculo3 << "\n";

    return 0;
}