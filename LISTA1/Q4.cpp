#include <oistream>

int main()
{

    int comprimento_rua, distancia, quantidade_poste;

    std::cout<< "Informe o comprimento da rua: ";
    std::cin >> comprimento_rua;

    std::cout<< "Informe a distância  da rua: ";
    std::cin >> distancia;

    quantidade_poste = 2;

    quantidade_poste += comprimento_rua / distancia;

    std::cout<< "A quantidade de nessa rua é: " << quantidade_poste <<"\n"; 

    std::cin.ignore();
    std::cin.get();
    return 0;
}