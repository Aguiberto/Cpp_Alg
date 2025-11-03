/*
1.Escrever um algoritmo para determinar
se um número é primo.
2. Escrever uma equação de tempo de execução 
da função primo.
3.Equação de tempo de execução = contagem de operações no código
4. Considerar sempre o pior caso*/


#include <iostream>
#include <chrono>

bool primo(int n){
    bool primo = false;                  
    int divisores = 0;                  
    for( int i = 1; i <= n; i++){
        if(n % i == 0){                
            divisores += 1;             
        }
    }
    if(divisores == 2){
        primo = true;
    }

    return primo;
}

// using namespace std;

// int main(){

//     int numero;

//     cout << " Digite um numero para averiguar se ele e primo: " << endl;
//     cin >> numero;

//     bool testando_primo = primo(numero);

//     if (testando_primo == true){
//     cout << "E primo " << endl;
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
    bool p = primo(n);
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();

    if (p)
        std::cout << n << " is prime" << std::endl;
    else 
    std::cout << n << " is not prime" << std::endl;

    auto dur = end - beg;
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
    std::cerr << n << " Processing time: " << duration.count() << " microsecond(s)" << std::endl;

    return 0;
}      