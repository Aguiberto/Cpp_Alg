#include <iostream>

int soma (int a, int b) {
    int r = a + b;
    return r;
}

int main (){
    int a, b ;
    std::cin >> a >> b;
    int s = soma(a,b);
    std::cout << s << std::endl;
    return 0;
}

// resultado 1 = 30
// resultado 2 = 0
// resultado 3 = -5
// resultado 4 = 20000000000
// resultado 5 = 4
// resultado 6 = erro
// resultado 7 = erro

/*os erros são causado por overflow
visto que extrapolam a capacidade de 
representação do tipo inteiro*/
