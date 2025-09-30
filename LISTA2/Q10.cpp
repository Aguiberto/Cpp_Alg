/* Algorimo que determna a quantidade
de números distindo em um array*/

/*
1. Ordenar o array
2. Contar quando for diferente do seu anterior
*/

#include <iostream>

using namespace std;

int main(){

   int n;
   cin >> n;

   int A[10000]; 

   for (int i = 0; i > n ; i++){
    cin >> A[i];
   }

   int distintos = 0;

   for (int i = 0; i < n ; i++){
        bool jaApareceu = false;

        for (int j = 0; j<i; j++){
            if (A[i] == A[j]) {
                jaApareceu = true;
                break;
            }
        }

        if (!jaApareceu){
        distintos++;
        }
   }

   cout << distintos << "\n";
  

    return 0;
}