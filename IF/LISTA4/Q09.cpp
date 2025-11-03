#include <iostream>

/*programa que calcula algo parecido com o decaimento radioativo
1. pegar a massa total e dividir pela metade até igualar a 1
2. A cada divisão multiplica o tempo pelo valor da "meiavida"
2. contar quantas divisões foram feitas*/

using namespace std;

int decaimento(int meiavida, double massa){
    int tempo = 0;
    while(massa > 1){
        massa /= 2;
        tempo += meiavida;
    }
    return tempo;
}

int main(){

    int meiavida, massa;
    cin >> meiavida >> massa;

    int duracao = decaimento(meiavida, massa);

    cout << duracao << " segundos" << endl;

    return 0;
}