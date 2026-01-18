#include <iostream>

bool labirinto_bt(int labirinto[20][20], int linha, int coluna, int l, int c){

    if(l<0 or c<0 or l >= linha or c >= coluna or labirinto[l][c] == 1 or  labirinto[l][c] == 9){
        return false;
    }
    /** Rejeitar se:
     * 1. estiver fora matriz
     * 2. Se a célula da matríz estiver ocupado com o valor 1
     */

    if (l == linha-1 and c == coluna-1){
        return true;
    }
    /*Chegou ao final da matriz(SAÍDA)*/

    labirinto[l][c] = 9;
    /*Marca a célula com esse valor
    para o algorimo não passar por ele novamente 
    e  entrar em um loop infinito */

    bool ans = false;
    /*Assume inicialmene que o labirinto não tem solução*/

    ans = labirinto_bt(labirinto,linha,coluna, l+1,c);
    /*começa andando um célula para a baixo*/

    if(ans == false){
        ans = labirinto_bt(labirinto,linha,coluna, l,c+1);
        /*Anda uma célula para direita */
    } 
    if(ans == false){
        ans = labirinto_bt(labirinto,linha,coluna, l,c-1);
        /*Anda uma célula para a esquerda*/
    }
    if(ans == false){
        ans = labirinto_bt(labirinto,linha,coluna, l-1,c);
        /*Anda uma célula para cima*/
    }

    labirinto[l][c] = 0;
    /*Se nenhuma das alternativas anteriores deu certo então a célula volta a ser 0.*/

    return ans;
}

int main(){

    int linha, coluna, labirinto[20][20];
    /*Cria as variáveis  e a matriz*/
    std::cin >> linha >> coluna;
    /*pede ao usuário o a quantidade de linhas e colunas*/

    for(int i = 0; i < linha ; i++){
        for(int j = 0; j< coluna ; j++){
            std:: cin >> labirinto[i][j];
        }
    /*adiciona valores as colunas e linhas*/
    }

    std::cout <<"Leitura concluida\n";

    if(labirinto_bt(labirinto,linha,coluna,0,0)){
        std::cout << "Labirinto tem saida.\n";
    }else{
        std::cout << "Labirinto não tem saida. \n";
    }
    return 0;

}