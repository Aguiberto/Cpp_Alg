#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    int numero;
    int divisores = 0; 

    cout << "Informe um número para saber se ele é primo: " ;
    cin >> numero ;
    
    for(int i = 1; i*i <= numero; i++){
        if (numero % i == 0){
            divisores ++;
            if( i != numero / i){
                divisores ++;
            }
        }
    }

    if (divisores == 2){
        cout << "PRIMO" << "\n";
    } else {
        cout << "Ñ PRIMO" << "\n";
    }

    cin.ignore();
    cin.get();
    return 0;
}