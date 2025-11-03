#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace std::chrono;

int sublista(int n, const vector<int>& lista){
    int fracao = 1;
    int maior_fracao = 0;

    for (int i = 1; i < n - 1; i++){
        if(lista[i] >= lista[i - 1]){
            fracao += 1;
        } else {
            if(fracao > maior_fracao){
                maior_fracao = fracao;
            }
            fracao = 1;
        }
    }

    if (fracao > maior_fracao){
        maior_fracao = fracao;
    }

    return maior_fracao;
}

int main() {
    srand(time(0));

    vector<int> tamanhos = {10000, 20000, 40000, 80000, 160000,320000,640000,1200000,2400000,4800000}; // Tamanhos crescentes

    for (int tamanho : tamanhos) {
        vector<int> lista(tamanho);

        // Preenche a lista com valores aleatórios
        for (int i = 0; i < tamanho; i++) {
            lista[i] = rand() % 1000;
        }

        auto inicio = high_resolution_clock::now();
        int resultado = sublista(tamanho, lista);
        auto fim = high_resolution_clock::now();

        auto duracao = duration_cast<microseconds>(fim - inicio);

        cout << "Tamanho: " << tamanho 
             << " -> Tempo: " << duracao.count() << " microssegundos" << endl;
    }

    return 0;
}
