#include <fstream>
#include <vector>
#include <random>
#include <iomanip>

int main() {
    std::vector<int> tamanhos = {
        10, 30, 100, 300, 1000,
        2000, 3000, 5000, 7000, 10000
    };

    std::mt19937 gen(42); // seed fixa (reprodutível)
    std::uniform_int_distribution<int> dist(0, 9999);

    for (size_t i = 0; i < tamanhos.size(); ++i) {
        std::ofstream out("input-" + std::to_string(i + 1) + ".txt");
        int N = tamanhos[i];

        out << N << "\n";
        for (int j = 0; j < N; ++j) {
            out << dist(gen);
            if (j + 1 < N) out << " ";
        }
        out << "\n";
    }

    return 0;
}
