#include <iostream>
#include <cmath>

/*Editar o programa para mostrar os 
valores em decimal com 2 casas*/

/*
1.Fazer o calculo para as entradas de 2 a 20
2. Colocar o resultado em um array.
3. Calcular a média
4. Informar qual tem a menor média.*/

/*Fazer o gráfico usando o Geogebra*/

using namespace std;

int main(){

    int n;

    cout << "Informe o valor de N: " << endl;
    cin >> n;

    int a,b,c,d;
    double Log2N;

    Log2N = log(n) / log(2);

    a = (pow(2,n) / pow(n,2)) - n + 10;
    b = 10*n + 450;
    c = 10 + 2*pow(n,2) + n;
    d = 500 + 20*Log2N;
    
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
    cout << "C : " << c << endl;
    cout << "D : " << d << endl;

    return 0;
}