#include<iostream>

int caminhos_labirinto(int lab[20][20], int linha, int coluna, int px, int py){

    if(px < 0 or py < 0 or px >= linha or py >= coluna or lab[px][py] == 1 or lab[px][py] == 9){
        return 0;
        // se não tem saída retorna 0
    }

    if(px == linha-1 and py == coluna-1 ){
        return 1;
        // se encontrou saída retorna 1
    }

    // marcando caminho que já passou
    lab[px][py] = 9;

    int total  = 0;

    total = caminhos_labirinto(lab, linha, coluna, px,py+1); // Anda para DIREITA
    total += caminhos_labirinto(lab, linha, coluna, px+1,py); // Anda para DIREITA
    total += caminhos_labirinto(lab, linha, coluna, px,py-1); // Anda para DIREITA
    total += caminhos_labirinto(lab, linha, coluna, px-1,py); // Anda para DIREITA

    // DESMARCANDO: permite que outros caminhos usam as mesmas células
    lab[px][py] = 0;

    return total;

}

int main(){

    using namespace std;

    int linha, coluna, labirinto[20][20];

    cin >> linha >> coluna;

    for(int i = 0; i < linha ; i++){
        for(int j = 0; j < coluna; j++){
            cin >> labirinto[i][j];
        }
    }

    cout << caminhos_labirinto(labirinto, linha, coluna,0,0) << endl;

    return 0;
}