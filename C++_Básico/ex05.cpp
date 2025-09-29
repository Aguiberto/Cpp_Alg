#include <iostream>

using namespace std;

int main(){

    int metros,centrimetros;

    cout << "Digite um valor para converter para METROS: " << "\n";
    cin >> metros;

    centrimetros = metros * 100;

    cout << " O valor digitado equivale a : " << centrimetros << " CENTÍMETROS (cm)" << "\n";

    return 0;
}