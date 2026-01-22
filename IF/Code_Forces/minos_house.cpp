#include <iostream>

int labirinto[20][20];

bool lab_way(int labirinto[20][20],int coluna, int linha, int c, int l){

    if(c < 0 || l < 0 || l >= linha || c>= coluna || labirinto[l][c] == 1 || labirinto[l][c] == 9){
        return false;
    }
    if( c == coluna -1 and l == linha-1){
        return true;
    }

    labirinto[l][c] = 9;

    bool resultado = false;

    if(resultado == false){
        resultado = lab_way(labirinto, coluna , linha, c + 1,l); /*para direita*/
    }
    if(resultado == false){
        resultado = lab_way(labirinto,coluna, linha ,c,l + 1);    /*para baixo*/
    }
    if(resultado == false){
        resultado = lab_way(labirinto,coluna , linha ,c - 1,l);   /*para esqueda*/
    }
    if(resultado == false){
        resultado = lab_way(labirinto,coluna, linha,c,l - 1);    /*para cima*/
    }

    labirinto[l][c] = 0;

    return resultado;

}

int main(){

    using namespace std;

    int coluna;
    int linha;

    cin >> linha >> coluna;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j< coluna; j++){
            cin >> labirinto[i][j];
        }
    }

    int resultado;

    if(lab_way(labirinto,coluna,linha,0,0)){
        resultado = 1;
    }else{
        resultado = 0;
    }

    cout << resultado << endl;

    return 0;

}