#include <iostream>

using namespace std;

int main(){

    float celcius;
    float fareheit;

    cout << "Conversor de temperaturas" << '\n';
    cout << "Inform a temperatura em Celcius: " << '\n';

    cin >> celcius;

    fareheit = celcius * 9/5 + 32;

    cout << "Em Farenheit vale: " << fareheit << '\n';

    return 0;
}