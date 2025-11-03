#include <iostream>
#include <chrono>

using namespace std;

bool primo3(int n){

    bool resultado = true;
    int qtd_div = 1;

    if(n == 1){
        resultado = false;
    }if(n == 2){
        resultado = true;
    }if(n % 2 == 0){
        resultado = false;
    }
    for(int i = 3; i <= n/2; i += 2){
        if(n % i == 0){
            qtd_div += 1;
        }
    }
    if(qtd_div > 1){
        resultado = false;
    }

    return resultado;
}   

// int main(){
    
//     bool verificador;
//     int numero;

//     cout << "Informe um numero: " << endl;
//     cin >> numero;

//     verificador = primo3(numero);

//     if(verificador == true){
//         cout << "E primo!" << endl;
//     }else {
//         cout << "Nao e primo" << endl;
//     }

//     return 0;
// }

int main(){
    long long n;
    std::cin>>n;

    // Inicio do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    bool p = primo3(n);
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