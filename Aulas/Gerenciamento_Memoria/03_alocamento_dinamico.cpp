# include <iostream>

using namespace std;

int main(){

    int *n
    int t
    int i;
    n = new int[t];
    if(  == nullptr){
        cerr << "ERRO ao alocar memoria" << endl;
        exit(1); 
    }
    for ( i = 0; i < t ; i++){
        cin >> n[i];
    }
    for (i = 0; i < t ; i++){
        cout << n[i] << " ";
    }

    cout << end;

    return 0;
}