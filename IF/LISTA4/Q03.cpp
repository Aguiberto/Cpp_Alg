int diferenca(int n, int lista[]){

    int dif_final = 0;
    int dif = 0;

    for(int i = 1; i < n -1; i++){
        dif = abs(lista[i] - lista[i - 1]);
        if(dif > dif_final){
            dif_final = dif;
        }
    }
    return dif_final;
}

int main(){

    // int n;
    // std::cin >> n;

    int tamanho; 
    cin >>  tamanho;
    int lista [tamanho];

    int maiordif;

    for (int i = 0; i < tamanho; i++){
        cin >> lista[i];
    }

    maiordif = diferenca(tamanho, lista);
    
    cout <<"A maior diferenca e: "<< maiordif << endl;

    return 0;
}