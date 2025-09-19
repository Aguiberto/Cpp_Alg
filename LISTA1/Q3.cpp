// Programa para calcular a área de um círculo

#include <iostream>

int main()
{
    setlocale(LC_ALL,"portuguese");

    float pi = 3.14159;
    float diametro;
    float raio;
    float area;

    std::cout <<"Digite o valor do diâmetro: ";
    std::cin>> diametro;

    raio = diametro/2;
    area = pi * (raio*raio) ;

    std::cout << "A área do círculo é: " << area << "\n";

    std::cin.ignore();
    std::cin.get();

    return 0;
}