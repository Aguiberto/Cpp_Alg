#include <iostream>

bool soma_sublista_bt(int *a, int tam, int soma){
    int r;
    if(soma == 0) return true; /*Existe uma solução*/
    if(soma < 0 || tam == 0) return false; /*Testou todos os casos e não encontrou solução*/
    r = soma_sublista_bt(a, tam -1, soma - a[tam -1]);
    r = r || soma_sublista_bt(a,tam -1, soma);
    return r;
}


int main(){

    int *a, n,s,i;
    std:: cin >> n >> s;
    a = new int[n];
    for (i = 0; i < n; i++){
        std::cin>> a[i];
    }
    if(soma_sublista_bt(a,n,s)){
        std::cout << "Existe sublista de soma. \n";
    }else{
        std::cout << "Não existe sublista de soma. \n";
    }
    delete [] a;
    return 0;
}
