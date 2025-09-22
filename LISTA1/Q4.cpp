#include <iostream>

int main()
{

    int comprimento_rua, distancia, quantidade_poste;

    std::cout<< "Informe o comprimento da rua: ";
    std::cin >> comprimento_rua;

    std::cout<< "Informe a distância entre o postes: ";
    std::cin >> distancia;

    if (comprimento_rua % distancia == 0){
        quantidade_poste = (comprimento_rua / distancia) + 1;
    } else {
        quantidade_poste = (comprimento_rua/distancia) + 2;
    }

    std::cout<< "A quantidade de postes nessa rua é: " << quantidade_poste <<"\n"; 

    std::cin.ignore();
    std::cin.get();
    return 0;
}