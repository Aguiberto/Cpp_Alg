#include <iostream>

using namespace std;

int main(){

    int nota1, nota2, nota3, nota4;
    int media;

    cout << "Informe as 4 notas bimetrais: " << "\n";
    cin >> nota1 >> nota2 >> nota3 >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << " A média foi: " << media << "\n";

    return 0;

}