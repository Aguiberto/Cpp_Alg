#include<iostream>
#include<algorithm>

/*Mostra quantas casas tem o caminho com menor quantidade de casas*/

using namespace std;
const int MUITO_ALTO = 1e6;

int melhor_caminho(int lab[20][20],int linha, int coluna, int px, int py){

    if(px < 0 or py < 0 or px >= linha or py >= coluna or lab[px][py] == 1 or lab[px][py] == 9){
        return MUITO_ALTO;
    }
    if( px == linha-1 and py == linha-1){
        return 1;
    }

    lab[px][py] = 9;

    int em_frente = melhor_caminho(lab, linha, coluna,px,py+1);
    int abaixo = melhor_caminho(lab, linha, coluna,px+1,py);
    int para_tras = melhor_caminho(lab, linha, coluna,px,py-1);
    int acima = melhor_caminho(lab, linha, coluna,px-1,py);

    lab[px][py] = 0;

    int menor = min({em_frente,abaixo,para_tras,acima});

    if( menor >= MUITO_ALTO){
        return MUITO_ALTO;
    }

    return 1 + menor;
}

int main(){

    int linha, coluna, labirinto[20][20];

    cin >> linha >> coluna;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cin >> labirinto[i][j];
        }
    }

    int resultado = melhor_caminho(labirinto, linha, coluna, 0,0);

    if(resultado >= 1e6){
        cout << "-1" << endl;
    }
    if(resultado < 1e6 and resultado > 0){
        cout << resultado + 1 << endl;
    }

    return 0;
}