#include <iostream>

int labirinto[20][20];

bool lab_way(int labirinto[20][20],int coluna, int linha, int c, int l){

    if(c < 0 || l < 0 || l >= linha || c>= coluna || labirinto[coluna][linha] == 1 || labirinto[coluna][linha] == 9){
        return false;
    }
    if( c == coluna -1 and l == linha-1){
        return true;
    }

    labirinto[l][c] == 9;

    bool resultado = false;

    if(resultado == false){
        resultado = lab_way(labirinto, coluna + 1, linha, c,l); /*para baixo*/
    }
    if(resultado == false){
        resultado = lab_way(labirinto,coluna, linha +1,c,l);    /*para direita*/
    }
    if(resultado == false){
        resultado = lab_way(labirinto,coluna -1, linha ,c,l);   /*para esqueda*/
    }
    if(resultado == false){
        resultado = lab_way(labirinto,coluna, linha -1,c,l);    /*para cima*/
    }

    labirinto[l][c] == 0;

    return resultado;

}