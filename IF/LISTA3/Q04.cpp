#include <chrono>
#include <iostream>

/*
1. entrada
2. equação do tempo de execução (6n+3)
3. tempo de execução * quantidade de operações
4. equação do tempo de execução / tempo real
4. saída*/

bool prime(long long n) {
    int qty_divs = 0;
    for (long long d = 1; d <= n; ++d)
        if (n % d == 0)
            qty_divs = qty_divs + 1;
    return qty_divs == 2;
}

int main() {
    long long n;
    std::cin >> n;

    // Início do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    bool p = prime(n);
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();

    if (p)
        std::cout << n << " is prime" << std::endl;
    else
        std::cout << n << " is not prime" << std::endl;

auto dur = end - beg; // Duração do cronômetro
auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
std::cerr << n << " Processing time: "
<< duration.count() << " microseconds(s)" << std::endl;

    return 0;
}