#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
using namespace std::chrono;

int diferenca(int n, const vector<int>& lista){
    int dif_final = 0;
    int dif = 0;

    for(int i = 1; i < n - 1; i++){
        dif = abs(lista[i] - lista[i - 1]);
        if(dif > dif_final){
            dif_final = dif;
        }
    }
    return dif_final;
}

int main() {
    srand(time(0)); // Inicializa gerador de aleatórios

    vector<int> tamanhos = {10000, 20000, 40000, 80000, 160000,320000,640000,1200000,2400000,4800000};

    for (int tamanho : tamanhos) {
        vector<int> lista(tamanho);

        // Preenche a lista com valores aleatórios entre 0 e 10000
        for (int i = 0; i < tamanho; i++) {
            lista[i] = rand() % 10000;
        }

        auto inicio = high_resolution_clock::now();
        int resultado = diferenca(tamanho, lista);
        auto fim = high_resolution_clock::now();

        auto duracao = duration_cast<microseconds>(fim - inicio);

        cout << "Tamanho: " << tamanho
             << " -> Tempo: " << duracao.count() << " microssegundos" << endl;
    }

    return 0;
}
