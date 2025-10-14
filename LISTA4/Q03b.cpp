#include <chrono>
#include <iostream>
#include <cmath>

/*
1. entrada
2. equação do tempo de execução (10n+10)
3. tempo de execução * quantidade de operações
4. equação do tempo de execução / tempo real
4. saída*/

using namespace std;

int diferenca(int n, int lista[]){

    int dif_final = 0;
    int dif = 0;

    for(int i = 1; i < n -1; i++){
        dif = abs(lista[i] - lista[i - 1]);
        if(dif > dif_final){
            dif_final = dif;
        }
    }
    return dif_final;
}

int main() {

    // int n;
    // std::cin >> n;

    int tamanho; 
    cin >>  tamanho;
    int lista [tamanho];

    int maiordif;

    for (int i = 0; i < tamanho; i++){
        cin >> lista[i];
    }

    // Início do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    maiordif = diferenca(tamanho, lista);
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();

    cout <<"A maior diferenca e: "<< maiordif << endl;

auto dur = end - beg; // Duração do cronômetro
auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
std::cerr << tamanho << " Processing time: "
<< duration.count() << " microseconds(s)" << std::endl;

    return 0;
}