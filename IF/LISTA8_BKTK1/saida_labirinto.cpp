#include <iostream>

bool caminho_seguro(int lab[20][20],int linha, int coluna, int px,int py){
/**
 * Lab matriz que será o labirinto
 * linha = informa quantas linhas tem o labirinto
 * coluna = informa quantas clunas tem o labirinto
 * px e py = posição atual no eixo x e no eixo y
 */

    if(px < 0 && py < 0 && px >= linha && py >= coluna && lab[px][py] == 1 && lab[px][py] == 9){
    /*Condições: Não pode estar fora da matriz, a proxima célular não pode ser 1(parede) ou 9(caminho já percorrido)*/
        return false;
    }
    if(lab[px][py] == lab[linha-1][coluna-1]){
        return true;
    }

    lab[px][py] = 9;
    bool solucao = false;

    if(solucao = false){
        caminho_seguro(lab,linha,coluna,px,py+1); // vai uma célula para DIREITA
    }
    if(solucao = false){
        caminho_seguro(lab,linha,coluna,px+1,py); // vai uma célula para BAIXO

    }
    if(solucao = false){
        caminho_seguro(lab,linha,coluna,px,py-1); // vai uma célula para ESQUERDA
    }
    if(solucao = false){
        caminho_seguro(lab,linha,coluna,px-1,py); // vai uma célula para CIMA
    }


    lab[px][py] = 0;

    return solucao;
}


int main(){

    using namespace std;

    int linha;
    cin>> linha;

    int coluna;
    cin >> coluna;

    int labirinto[20][20];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cin >> labirinto[linha][coluna];
        }
    }

    bool saida = caminho_seguro(labirinto, coluna, linha,0,0);
    
    if(saida){
        cout << "Ha saida" << endl;
    }else{
        cout << "Nao ha saida" << endl;
    }

    return 0;

}