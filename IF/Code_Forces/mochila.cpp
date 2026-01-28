#include <iostream>
#include <vector>
#include <iomanip>


using namespace std;

struct item{
    int peso;
    double valor;
};

// Para usar essa função tem que passar um array(mochila), um índice, e a capacidade da mochila
double mochila_pesada(vector<item> & mochila, int i, int capacidade){

    //Mochila vazia ou sem capacidade
    if(i < 0 or capacidade <=0){
        return 0;
    }

    //Se o item atual não cabe, não pode ser escolhido
    if(mochila[i].peso > capacidade){
        return mochila_pesada(mochila, i - 1, capacidade);
    }

    double recusar = mochila_pesada(mochila, i - 1, capacidade);
    // quando aqui retorna 0 (chega no caso base), então a proxima linha é executada

    double aceitar = mochila[i].valor + mochila_pesada(mochila, i - 1, capacidade - mochila[i].peso);
    // ao aceitar o item a capacidade da mochila é reduzida
    // aqui a variável vai acumulando valor recursivamente 

    return max(aceitar, recusar);

}

int main(){
    
    int indice;
    int peso_maximo;
    cin >> indice >> peso_maximo;

    // cria a mochila(array) com uma quantidade informada pela variável "índice"
    vector<item> mochila(indice);

    for(item & i: mochila){
        cin >> i.peso >> i.valor;
        // cada item da mochila tem seus "atributos" preenchidos
    }

    
    double maior_valor = mochila_pesada(mochila, indice-1, peso_maximo);
    // cada chamada recursiva diminui um item da mochila 

    cout << fixed << setprecision(2) << maior_valor << endl;

    return 0;
}