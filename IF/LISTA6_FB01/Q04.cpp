/*Calculando a distância entre 2 pontos
em coordenadas geográficas*/

#include <iostream>
#include <cmath>

using namespace std;

hipotenus(int x1, int y1, int x2, int y2){
    
    return hipotenusa = (sqrt((x1 - x2)*(x1-x2) + (y1-y2)*(y1-y2)));
}

int main(){

    int entrada;
    cin >> entrada;

    int ponto1[2];
    cin >> ponto1[0] >> ponto1[1];

    int ponto2[2];
    cin >> ponto2[0] >> ponto2[1];

    int ponto3[2];
    ponto3[0] = ponto2[0];
    ponto3[1] = ponto1[1];

    int distancia = sqrt(((ponto1[0] - ponto3[0])*(ponto1[0] - ponto3[0])) + ((ponto2[1] - ponto3[1])*(ponto2[1] - ponto3[1])));

    cout << "A distancia e :" << distancia << endl;

    return 0;
}

/* função para calcular a matriz a partir de 2 pontos */

