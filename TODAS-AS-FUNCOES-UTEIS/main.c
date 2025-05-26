#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// CALCULOS LÓGICOS //
int contaDigitos(int num);                              // --> NÃO PRECISA   

int acharPrimeirosDigitos(int num, int digitos);

int concatenacao(int num, int digitos, int primeiros);

//////////////////////////////////////////////////////////////////

// MATRIZES //

void mallocar(int ***matriz, int n);

void liberarMatriz(int **matriz, int n);

void leiamatriz(int n, int **matriz);

void printarMatriz(int **matriz, int n);

void matriztrasposta(int **matriz, int **matrizTrasposta, int n); // --> NÃO PRECISA

void matrizIdentidade(int **matriz, int n);                       // --> NÃO PRECISA

void multiplicaMats(int **matOrtogonal, int **matriz, int **matrizTrasposta, int **matrizId, int n);

int verificaOrtogonalidade(int **matOrtonal, int n);             // --> NÃO PRECISA



// STRINGS //

int palindroma(char palavra[]);

void removeEspacos(char palavra[], char frase[]);


////////////////////////////////////////
int main(void) {

  // TADINHA DA MAIN VAI FICAR ATÉ INTIMIDADA AQUI NO MEIO COM TODO MUNDO EM VOLTA //



  return 0;
}
////////////////////////////////////////

// NUMEROS <--------------------------------------->
int contaDigitos(int num){
  int cont = 1;
  while (num > 9){
    num = num/10;
    cont++;
  }
  return cont;
}


int acharPrimeirosDigitos(int num, int digitos){
  int p1, p2;

  p1 = num % (int) pow (10, (digitos-2));
  p2 = (num - p1)/(pow (10, (digitos-2)));

  return (p2);
}


int concatenacao(int num, int digitos, int primeiros){
  int ultimos = (num % 100);

  if (pow((ultimos+primeiros),2) == primeiros*100 + ultimos){
    return 1;
  }
  return 0;
}


// MATRIZES <------------------------------------------------------->

void mallocar(int ***matriz, int n){
  *matriz = (int **) malloc(n*sizeof(int*));
  if (*matriz==NULL){
    printf("Espaço insuficiente.");
    exit(1);
    }
  // ALOCAR LINHAS
  for (int i=0; i<n; i++){
    (*matriz)[i] = (int*) malloc (n* sizeof(int));
    if ((*matriz)[i]==NULL){
      printf("Espaço insuficiente.");
      exit(1);
    }
  }
}


void leiamatriz(int n, int **matriz){
  for (int i=0; i < n; i++){
    for (int j=0; j < n; j++){
      printf("Digite matriz[%d][%d]:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}


void printarMatriz(int **matriz, int n){
  printf("{{");
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


void matriztrasposta(int **matriz, int **matrizTrasposta, int n){
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      matrizTrasposta[j][i] = matriz[i][j];
    }
  }
}

void matrizIdentidade(int **matriz, int n){
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      if (i==j){
        matriz[i][j] = 1;
      } else {
        matriz[i][j] = 0;
      }
    }
  }
}

void multiplicaMats(int **matOrtogonal, int **matriz, int **matrizTrasposta, int **matrizId, int n){
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      int soma=0;
      for (int k=0; k<n; k++){
        soma += matriz[i][k] * matrizTrasposta[k][j];
      }
      matOrtogonal[i][j] = soma;
    }
  }
}

int verificaOrtogonalidade(int **matOrtonal, int n){
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      if ( i == j && matOrtonal[i][j] != 1){
        return 0;
      } else if (i != j && matOrtonal[i][j] != 0){
        return 0;
      }
    }
  }
  return 1;
}

// STRINGS // <------------------------------------>


void liberarMatriz(int **matriz, int n){
  for (int i=0; i < n; i++){
    free(matriz[i]);
  }
  free(matriz);
}


int palindroma(char palavra[]){
  int j = strlen(palavra);
  //printf("%d\n", j);
  for (int i=0; i < j; i++){
    if (palavra[i] != palavra[j-1-i]){
      return 0; // não é
    }
  } return 1; // é
}


void removeEspacos( char palavra[], char frase[]){
  int j=0;
  for (int i=0; palavra[i] != '\0'; i++){
    if (palavra[i] != ' ') {
      frase[j] = palavra[i];
      j++;
    }
    frase[j] = '\0'; // NÃO ESQUECER DE COLOCAR O CARACTERE FINAL
  }printf("%s", frase);
}


// UTILIDADES ENXERGADAS // --------------------------------------------------->


int *tranforma_em_vetor(int n, int *i){
  // ALOCA UM ESPAÇO GRANDE NO VETOR // 
  int *numero = (int *) malloc(sizeof(int) * 13),
      c = 0;
  while(n != 0){
     numero[c]  = n % 10;
     n /= 10;
     c++;
  }
  // REALOCA ESPAÇO DO VETOR // 
  numero = (int *) realloc(numero, sizeof(int) * c);
  *i = c;
  return numero;
}