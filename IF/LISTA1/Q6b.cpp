#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL,"portuguese");

    int numero;
    bool primo = true;

    cout << "Digite um número para verificar se é primo: ";
    cin >> numero;

    if (numero < 2){
        primo = false;
    } else{
        for (int i = 2; i*i <= numero; i++){
            if (numero % i == 0){
                primo = false;
                break;
            }
        }
    }

    if(primo){
        cout << numero <<" É PRIMO \n";
    } else {
        cout << numero << " NÃO É PRIMO! \n";
    }

    cin.ignore();
    cin.get();

    return 0;

}