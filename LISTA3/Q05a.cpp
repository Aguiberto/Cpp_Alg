#include <iostream>
#include <chrono>

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

    // int main(){

    //     setlocale(LC_ALL,"portuguese");

    //     int numero; 
    //     cout << "Informe um número: " << endl;
    //     cin >> numero; 

    //     bool verificando_primo = primo2(numero);

    //     if(verificando_primo == true){
    //         cout << "É PRIMO" <<endl;
    //     }else{
    //         cout << "Não é PRIMO" <<endl;
    //     }
    //     return 0;
    // }
    

int main(){
    long long n;
    std::cin>>n;

    // Inicio do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    bool p = primo2(n);
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();

    if (p)
        std::cout << n << " is prime" << std::endl;
    else 
    std::cout << n << " is not prime" << std::endl;

    auto dur = end - beg;
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
    std::cerr << n << " Processing time: " << duration.count() << "microsecond(s)" << std::endl;

    return 0;
}      