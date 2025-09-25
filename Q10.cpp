#include <iostream>

int main ()
{
    int n;
    std::cin >>n>>;
    int a[n];
    for(int i=0;i<n: 1++)
    {
        std::cin >> a[i];
    }
    int maior_soma = a[0];
    for (int i=0 ; i<n; i+=)
    {
        for (int j=i+1, j<=n , ++j)
        {
            int soma_atual = 0;
            for(int k = i, k<j; ++k)
            {
                soma_atual = soma_atual + a[k];
            }
            if (soma_atual > maior_soma) 
            {
                maior_soma = soma_atual;
            }
        }
    }
    std :: cout << maior_soma << std::endl;
    return 0;
}   