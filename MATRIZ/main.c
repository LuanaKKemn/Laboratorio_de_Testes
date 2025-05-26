#include <stdio.h>
#include <stdlib.h>

// ALOCAR ESPAÇO // 
void alocar_matriz(int ***matriz, int n);

// CRIAR MATRIZ, INSERINDO CADA VALOR// 
void criarMatriz(int **matriz, int n);

// PRINTAR MATRIZ //
void printarMatriz(int **matriz, int n);

// LIBERAR ESPAÇO NA MEMÓRIA //
void liberar_matriz(int **matriz, int n);


/////////////////////////////////////////////////////////////////
int main(void) {
  int n;
  int **matriz;

  // ENTRADA //
  printf("Digite n: ");
  scanf("%d", &n);

  // PROCESSAMENTO //
  alocar_matriz(&matriz, n);

  criarMatriz(matriz, n);


  // SAIDA //
  printarMatriz(matriz, n);



  liberar_matriz(matriz, n);
  return 0;
}
//////////////////////////////////////////////////////////////////


// ALOCAR ESPAÇO // 
void alocar_matriz(int ***matriz, int n){
  *matriz = (int**) malloc (n*sizeof(int*)); // ALOCAR A MATRIZ E AS LINHAS DA MATRIZ
  if (*matriz == NULL){
    printf("Espaço insuficiente\n");
    exit(1);
  }
  for (int i=0; i<n; i++){
    (*matriz)[i] = (int*) malloc (n*sizeof(int)); // ALOCAR AS LINHAS DA MATRIZ
    if ((*matriz)[i] == NULL){
      printf("Espaço insuficiente\n");
      exit(1);
    }
  }
}

// CRIAR MATRIZ, INSERINDO CADA VALOR// 
void criarMatriz(int **matriz, int n){
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      printf("Digite matriz[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]); 
    }
  }
}


// PRINTAR MATRIZ //
void printarMatriz(int **matriz, int n){
  printf("\nMatriz:\n{{");
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      if (j == n-1){
        printf("%d}", matriz[i][j]);
      } else{
        printf("%d, ", matriz[i][j]);
      }
    }if (i != n-1) {printf("\n {");}
  }printf("}\n");
}

// LIBERAR ESPAÇO NA MEMÓRIA //
void liberar_matriz(int **matriz, int n){
  for (int i = 0; i < n; i++) {
    free(matriz[i]);
  }
  free(matriz);
}

