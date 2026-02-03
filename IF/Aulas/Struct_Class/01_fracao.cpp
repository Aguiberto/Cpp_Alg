#include <iostream>

struct fracao{
    int numerador;
    int denominador;

    double operacao(){
        double resultado = static_cast<double>(numerador) /static_cast<double>(denominador);
        return resultado;
    }
};

using namespace std;

int main(){

    fracao f1;
    fracao f2;

    cin >> f1.numerador >> f1.denominador;
    cin >> f2.numerador >> f2.denominador;
    
    cout << f1.operacao() <<endl;
    cout << f2.operacao() <<endl;

    return 0;
}