
#include <iostream>

using namespace std;

int main(){

    float fareheit;
    float celcius;

    cout << "Conversão para ºCelcius" << '\n';
    cout << "Informe a temperatura: " << '\n';

    cin >> fareheit;

    celcius = (5* (fareheit - 32) / 9);

    cout << " Em graus Celcius vale: " << celcius << '\n';


    return 0;
}