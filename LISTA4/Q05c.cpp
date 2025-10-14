#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace std::chrono;

void soma_na_lista(int n, const vector<int>& lista, int procurado) {
    int soma = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            soma = lista[i] + lista[j];
            if(soma == procurado){
                return; // Encerra ao encontrar
            }
        }
    }
}

int main() {
    srand(time(0)); // Seed para números aleatórios

    vector<int> tamanhos = {100, 200, 400, 800, 1600,3200,6400,12800,25600,51200,102400}; // Pode aumentar, dependendo da máquina

    for(int tamanho : tamanhos){
        vector<int> lista(tamanho);

        // Preenche a lista com valores aleatórios
        for(int i = 0; i < tamanho; i++){
            lista[i] = rand() % 1000;
        }

        int valor_procurado = 2000000; // Um valor alto, que garantidamente NÃO será encontrado (pior caso)

        auto inicio = high_resolution_clock::now();

        soma_na_lista(tamanho, lista, valor_procurado);

        auto fim = high_resolution_clock::now();
        auto duracao = duration_cast<milliseconds>(fim - inicio);

        cout << "Tamanho: " << tamanho 
             << " -> Tempo: " << duracao.count() << " ms" << endl;
    }

    return 0;
}
