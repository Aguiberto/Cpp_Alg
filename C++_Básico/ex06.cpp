#include <iostream>

using namespace std;

int main(){

    float pi = 3.14;
    int raio;
    float area;

    cout << " Informa o RAIO para saber a área do círculo: " << "\n";
    cin >> raio;

    area = pi*(raio*raio);

    cout << " A área do circulo vale: " << area << '\n';

    return 0;

}