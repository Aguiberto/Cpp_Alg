#include <iostream>

/*
1º entrada = largura
2º entrada = altura
*/

using namespace std;

int main(){

    int dimensoes = 2;
    int pagina[dimensoes];
    int foto1[dimensoes];
    int foto2[dimensoes];

    
    cin >> pagina[1] >> pagina[0];
    cin >> foto1[0] >> foto1[1];
    cin >> foto2[0] >> foto2[1];
    

    /*definir a maior lagura*/
    int largura_maior = foto1[0];

    if(foto2[0] > largura_maior){
        largura_maior = foto2[0];
    }

    /*definir a maior altura*/
    int altura_maior = foto1[1];

    if(foto2[1] > altura_maior){
        altura_maior = foto2[1];
    } 

    bool possibilidade = false;

    if((foto1[0] + foto2[1] <= pagina[1]) && (altura_maior <= pagina[0])){
        possibilidade = true;       
    }
    if((foto1[1] + foto2[1] <= pagina[1]) && ( largura_maior <= pagina[0])){
        possibilidade = true;
    }
    if((foto1[0] + foto2[0] <= pagina[1]) && (altura_maior <= pagina[0])){
        possibilidade = true;
    }

    if(possibilidade){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}