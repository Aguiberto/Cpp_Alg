#include <iostream>

using namespace std;

int main(){

    int array[8] = {10, 20, 9, 1, 63, 6, 5, 12};
    int soma = 15;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8 ; j++){
            if(array[i] + array[j] == soma){
                cout << "A combinacaoo Array["<< i << "] + Array["<< j << "] e igual a S = " <<soma << endl;
            }
        }
    }

    return 0;
}