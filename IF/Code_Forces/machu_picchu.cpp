#include <iostream>
#include <algorithm>

const int INF = 1000000000;

int machu_picchu(int caminho[20][20], int linha, int coluna, int px, int py){
    
    /*Se na vertical a localização estiver fora da matriz, então
    retorna infinito (NUNCA será escolhido no ultimo return)*/
    if (py<0 or py>=coluna){ 
        return INF;
    }
    
    /*Se a localização horizontal for 0 então quer dizer que chegou até o o fim da matriz
    (topo de machu picchu) então retorna a localização final*/
    if (px==0){
     return caminho[px][py];
    }

    /*Anda para a localização com menor esforço*/
    /*Acumula o valor da posição atual na matriz com os das proximas posições*/
    return caminho[px][py] + std::min({machu_picchu(caminho, linha, coluna, px-1, py-1),
                                machu_picchu(caminho, linha, coluna, px-1,py),
                                machu_picchu(caminho, linha, coluna, px-1,py+1)
                            });
}

int main(){
    int linha, coluna;
    int caminho[20][20];
    std::cin >> linha >> coluna;
    for (int i=0 ; i<linha ; ++i){
        for (int j=0 ; j<coluna ; ++j){
            std::cin >> caminho[i][j];
        }
    }

    int menor_esforco = INF;
    for (int i=0 ; i<coluna ; ++i){

        // linha -1 faz o quer dizer que será iniciado na ultima linha (base de machu picchu)
        // começar com py = i significa que será testado da esquerda para direita
        int atual = machu_picchu(caminho, linha, coluna, linha-1, i);

        //escolhe sempre o valor que for menor
        if (atual < menor_esforco){
            menor_esforco = atual;
        }
    }
    std::cout << menor_esforco << std::endl;
    return 0;
}