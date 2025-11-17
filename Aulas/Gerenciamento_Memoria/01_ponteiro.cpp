#include <iostream>

using namespace std;

int main(){
    int a = 20;
    int *p;     /* esta variável é um ponteiro e recebe um endereço de memória*/
    p = &a;     /* referência para o valor que está no endereço de memória da variável a*/

    cout << "Valor de *p: "
         << *p << endl;

    *p = 50;
    cout << "Valor de a: "
         << a << endl;
         
    return 0;
}