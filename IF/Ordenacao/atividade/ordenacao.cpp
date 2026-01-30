#include "ordenacao.hpp"

/* TODO: Implementar função */
// Big-OH: O(n)
bool ordenado(int a[],  unsigned int t){
     
    for(unsigned int i = 0; i < t -1; i++){

        if(a[i] > a[i+1]){
            return false;
        }
    }

    return true;
}

/* TODO: Implementar função */
//Big-OH: O(n²)
void selecao(int a[], unsigned int t){
    int menor, aux;

  for(unsigned int i = 0; i < t-1; i++){

    menor = i;

    for(unsigned int j = i+1; j < t;j++){

      if(a[j] < a[menor]){
        menor = j;
      }
    }

    if(a[i] != a[menor]){
      aux = a[i];
      a[i] = a[menor];
      a[menor] = aux;
    }

  }
}

/* TODO: Implementar função */
//Big-OH: O(n²)
void insercao(int a[], unsigned int t){

    for(unsigned int i = 0; i < t; i++){

        int escolhido = a[i];
        int j = i - 1;

        while(j >= 0 and a[j] > escolhido){

            a[j+1] = a[j];
            j = j - 1;

        }

        a[j+1] = escolhido;
    }

}

//METODO PARA AUXILIAR NO MERGE_SORT
void merge(int array[], int inicio1, int final1, int inicio2, int final2){

  int tamanho = ((final1 - inicio1) + (final2 - inicio2) + 2);
  int *temp = new int[tamanho];

  int i,j,k;

  i = inicio1;
  j = inicio2;
  k = 0;

  while(i <= final1 && j <= final2){

    if(array[i] < array[j]){
      temp[k++] = array[i++];
    }else{
      temp[k++] = array[j++];
    }

  }

  while( i <= final1){
    temp[k++] = array[i++];
  }

  while( j <= final2){
    temp[k++] = array[j++];
  }

  for(int p = 0; p < tamanho; p++){
    array[inicio1 + p] = temp[p];
  }

  delete [] temp;

}

/* TODO: Implementar função */
void merge_sort_recursivo(int a[], int indice_i, int indice_f){

  int meio;

  if(indice_i < indice_f){

    meio = (indice_i + indice_f) / 2;
    merge_sort_recursivo(a, indice_i, meio);
    merge_sort_recursivo(a, meio + 1, indice_f);
    merge(a,indice_i, meio, meio+1, indice_f);

  }
};

// Função Wrapper (Embrulho)
//Big-OH: O(nlogn)
void merge_sort(int a[], unsigned int t){

    if(t <= 1){
    // Se o array é vazio ou então tem apenas um elemento, então algoritmo não faz nada
        return;
    }

    merge_sort_recursivo(a, 0, t-1);
};
