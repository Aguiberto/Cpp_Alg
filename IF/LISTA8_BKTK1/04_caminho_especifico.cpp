#include<iostream>

bool caminho_especifico(int lab[20][20], int linha, int coluna, int px, int py, int sx, int sy){

    if(px < 0 or py < 0 or px >= linha or py >= coluna or lab[px][py] == 1 or lab[px][py] == 9){
        return false;
    }
    if(px == sx and py == sy){
        return true;
    }

    //marca o caminho percorrido
    lab[px][py] = 9;
    
    bool saida = false;

    // DIREITA
    saida = caminho_especifico(lab, linha, coluna, px, py+1, sx, sy);

    // ABAIXO
    if(!saida){
        saida = caminho_especifico(lab, linha, coluna, px+1, py, sx, sy);
    }
    // ESQUERDA
    if(!saida){
        saida = caminho_especifico(lab, linha, coluna, px, py-1, sx, sy);
    }
    // ACIMA
    if(!saida){
        saida = caminho_especifico(lab, linha, coluna, px-1, py, sx, sy);
    }

    lab[px][py] = 0;

    return saida;
}

int main(){

    using namespace std;

    int linha, coluna, lab[20][20];
    cin >> linha >> coluna;

    // posição inicial x e y
    int px,py;
    cin >> px >> py;

    // ponto de saída x e y
    int sx, sy;
    cin >> sx >> sy;


    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cin >> lab[i][j];
        }
    }

    bool caminho = caminho_especifico(lab, linha, coluna, px, py, sx, sy);

    if(caminho){
        cout << "Tem saida!" << endl; 
    } else {
        cout << "Nao tem saida" << endl;
    }

    return 0;

}