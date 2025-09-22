#include <iostream>

using namespace std;

int contarDivisores(int n){
    int divisores = 0;
    for (int i = 1; i*i <= n; i++){
        if (n % i == 0){
            divisores++;
            if (i!=n/i){
                divisores++;
            }
        }
        
    }

    return divisores;
}

int main()
{
    int numero;

    cout <<"Digite um número para saber quantos DIVISORES ele tem: ";
    cin >> numero ;

    if(numero < 1 || numero > 1000000000){
        cout << "Numero fora do intervalo permitido!" << endl;
        return 1;
    }

    int quantidade = contarDivisores(numero);
    cout << "QUANTIDADE DE DIVISORES: " << quantidade<< "\n";

    cin.ignore();
    cin.get();

    return 0 ;
}