#include <iostream>
#include <algorithm>

const int INF = 1000000000;

int machu_picchu(int mp[20][20], int n, int m, int l, int c){
    if (c<0 or c>=m) return INF;
    if (l==0) return mp[l][c];
    return mp[l][c] + std::min({machu_picchu(mp, n, m, l-1, c-1),
                                machu_picchu(mp, n, m, l-1,c),
                                machu_picchu(mp, n, m, l-1,c+1)
                            });
}

int main(){
    int n, m;
    int mp[20][20];
    std::cin >> n >> m;
    for (int i=0 ; i<n ; ++i){
        for (int j=0 ; j<m ; ++j){
            std::cin >> mp[i][j];
        }
    }
    int menor_esforco = INF;
    for (int i=0 ; i<m ; ++i){
        int atual = machu_picchu(mp, n, m, n-1, i);
        if (atual < menor_esforco){
            menor_esforco = atual;
        }
    }
    std::cout << menor_esforco << std::endl;
    return 0;
}