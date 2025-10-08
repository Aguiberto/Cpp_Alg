#include <iostream>

using namespace std;

bool primo4(int n){

    int qtd_divisores = 0;
    bool primo = true;
    int divisor = 3;

    if(n == 1){
        primo = false;
    }
    if(n == 2){
        primo = true;
    }
    if(n != 2 && n % 2==0){
        primo = false;
    }
    while(primo && divisor <= (n / 2 )){
        if(n % divisor == 0){
            primo = false;
        }
        divisor += 2;
    }
    return primo;
}

int main(){

    bool verificador;
    int numero;

    cout << "Informe um numero: " << endl;
    cin >> numero;

    verificador = primo4(numero);

    if(verificador == true){
        cout << "E primo" << endl;
    }else{
        cout << "Nao e primo" << endl;
    }
    return 0;
}