#include <iostream>

/* O tipo das variáveis pode ser o INT
pois esse tipo suporta valores 
até +- 2,147,483,684 */

int main ()
{
    setlocale(LC_ALL,"portuguese");

    int l1, l2;
    int perimetro;

    std::cin >> l1 >> l2;

    perimetro = (l1*2) + (l2*2);

    std::cout <<"O perímetro vale : " << perimetro << "\n";

    std::cin.ignore();
    std::cin.get();
    return 0;
}