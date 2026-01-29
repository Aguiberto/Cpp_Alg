#ifndef __ORDENACAO__
#define __ORDENACAO__

/*
  Função que retorna se um vetor 'a' de 't' elementos 
  está ordenado não decrescentemente

  Retorno: false Se 'a' não estiver ordenado
           true caso contrário
*/
bool ordenado(int array[], unsigned int tamanho){

  for(int i = 0; i < tamanho -1; i++){

    if(array[i] > array[i+1]){
      return false;
    }else{
      return true;
    }

  }

};

/*
  Função que ordena o vetor 'a' de forma não decrescente
  usando o método de ordenação por seleção.
  A ordenação é feita diretamente no vetor 'a'
*/
void selecao(int array[], int size){
  
  int menor, aux;

  for(int i = 0; i < size-1; i++){

    menor = i;

    for(int j = i+1; j < size;j++){

      if(array[j] < array[menor]){
        menor = j;
      }
    }

    if(array[i] != array[menor]){
      aux = array[i];
      array[i] = array[menor];
      array[menor] = aux;
    }

  }

};

/*
  Função que ordena o vetor 'a' de forma não decrescente
  usando o método de ordenação por inserção.
  A ordenação é feita diretamente no vetor 'a'
*/
void insercao(int array[], int size){

  for(int i = 0; i < size; i++){

    int escolhido = array[i];
    int j = i - 1;

    while(j >= 0 and array[j] > escolhido){

      array[j+1] = array[j];
      j = j - 1;

    }

    array[j+1] = escolhido;

  }

};



/*
  Função que ordena o vetor 'a' de forma não decrescente
  usando o método de ordenação merge-sort.
  A ordenação é feita diretamente no vetor 'a'
*/


// METODO PARA AUXILIAR NO MERGE_SORT
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
    array[p] = temp[p];
  }

  delete [] temp;

}

void merge_sort(int a[], int indice_i, int indice_f){

  int meio;

  if(indice_i < indice_f){

    meio = (indice_i + indice_f) / 2;
    merge_sort(a, indice_i, meio);
    merge_sort(a, meio + 1, indice_f);
    merge(a,indice_i, meio, meio+1, indice_f);

  }

};

#endif