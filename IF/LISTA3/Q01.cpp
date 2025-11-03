#include <iostream>
#include <cmath>

/*usar o DESMOS para fazer o 
gráfico*/

using namespace std;

int main (){

    int n;
    int TA,TB;

    cout << "Informe o N: " << endl;
    cin >> n;

        TA = 100 * n + 500;
        TB = 2*pow(n,2) + 10;

    cout << "TA vale: " << TA << endl;
    cout << "TB vale: " << TB << endl;

    cout << "Diferença: " << TA - TB << endl;

    return 0;
}