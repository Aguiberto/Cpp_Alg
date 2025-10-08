#include <iostream>
#include <chrono>

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

// int main(){

//     bool verificador;
//     int numero;

//     cout << "Informe um numero: " << endl;
//     cin >> numero;

//     verificador = primo4(numero);

//     if(verificador == true){
//         cout << "E primo" << endl;
//     }else{
//         cout << "Nao e primo" << endl;
//     }
//     return 0;
// }

int main(){
    long long n;
    std::cin>>n;

    // Inicio do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    bool p = primo4(n);
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