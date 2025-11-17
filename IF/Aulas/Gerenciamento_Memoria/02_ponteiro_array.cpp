#include <iostream>

using namespace std;

int main(){
    int i;
    int a[5];
    int *p;

    for(int i = 0; i < 5; i++){
        a[i] = i * 2;
    }

    p = a;

    for(int i = 0; i < 5 ; i++){
        cout << *p << endl;
        p++;
    }
    return 0;
}