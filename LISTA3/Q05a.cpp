#include <iostream>

using namespace std;

bool primo2(int n){
    int divisores = 0;
    bool prime = true;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            divisores += 1;
        }
    }
    if (divisores > 1){
        prime = false;
    }
    return prime;
}

    int main(){

        setlocale(LC_ALL,"portuguese");

        int numero; 
        cout << "Informe um número: " << endl;
        cin >> numero; 

        bool verificando_primo = primo2(numero);

        if(verificando_primo == true){
            cout << "É PRIMO" <<endl;
        }else{
            cout << "Não é PRIMO" <<endl;
        }
        return 0;
    }
    

