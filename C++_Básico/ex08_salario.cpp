#include <iostream>

using namespace std;

int main(){

    float valor;
    float horas_trabalhadas;
    float salario;

    cout << "Informe as suas horas trabalhadas e o valor da hora de trabalho: " << '\n';
    cin >> horas_trabalhadas >> valor;

    salario = horas_trabalhadas * valor;

    cout << "Você receberá: " << salario << "$" << '\n';

    return 0;
}