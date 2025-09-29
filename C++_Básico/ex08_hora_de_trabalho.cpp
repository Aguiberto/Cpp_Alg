#include <iostream>

using namespace std;

int main(){

    float horas_trabalhadas;
    float pagamento;
    float valor;

    cout << "Informe as horas trabalharas e o respectivo pagamento: " << '\n';
    cin >> horas_trabalhadas >> pagamento;

    valor = pagamento / horas_trabalhadas;

    cout << "Sua hora de trabalho vale: " << valor << '\n';

    return 0;
}