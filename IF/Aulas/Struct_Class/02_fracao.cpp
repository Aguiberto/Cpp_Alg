#include <iostream>

using namespace std ;

struct fracao{
    
    public:

        int numerador;
        int denominador;

    public:

        double operacao(){
            
            if(denominador == 0){
                cout << "Erro: denominador igual a 0!" << endl;
                return 0.0;
            }

            double resultado = static_cast<double> (numerador) / static_cast<double> (denominador);
            return resultado;
        }
};

int main(){
    
    fracao f1;
    fracao f2;

    cin >> f1.numerador >> f1.denominador;
    cin >> f2.numerador >> f2.denominador;

    cout << f1.operacao() << endl;
    cout << f2.operacao() << endl;

    return 0;
}