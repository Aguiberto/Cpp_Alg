#include <iostream>

using namespace std;

bool primo3(int n){

    bool resultado = true;
    int qtd_div = 1;

    if(n = 1){
        resultado = false;
    }if(n = 2){
        resultado = true;
    }if(n % 2 == 0){
        resultado = false;
    }
    for(int i = 3; i < n/2; i+2){
        if(n % i == 0){
            qtd_div += 1;
        }
    }
    if(qtd_div > 1){
        resultado = false;
    }

    return resultado;
}   

int main(){
    
    bool verificador;
    int numero;

    cout << "Informe um número: " << endl;
    cin >> numero;

    verificador = primo3(numero);

    if(verificador = true){
        cout << "É primo!" << endl;
    }else {
        cout << "Não é primo" << endl;
    }

    return 0;
}