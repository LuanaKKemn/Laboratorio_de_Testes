#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void portariaDireito();


int main(void) {
  int tipo_Portaria;
  int resp;
  do {
    printf("Deseja fazer qual portaria?\n"
      "1 - DIREITO\n"
      "2 - RESIDENTES\n"
      "3 - CONVÊNIO NÍVEL TÉCNICO\n"
      "4 - CONVÊNIO NÍVEL SUPERIOR\n"
      "0 - FINALIZAR\n");
    scanf("%d", &tipo_Portaria);

    switch (tipo_Portaria){
      case 0:
      printf( "Deseja visulizar as portaias?\n"
              "0 - NÃO\n"
              "1 - SIM\n");
      scanf("%d", &resp);
      if (resp == 1){
        printf("PORTARIAS\n");
      }
      printf("As portarias estão salvas nos arquivos 'PortariaDireito.txt', 'PortariaResidentes.txt','PortariaTecnico.txt' e 'PortariaSuperior.txt'");

      case 1:
      portariaDireito();
    }

  } while (tipo_Portaria != 0);

  return 0;
}

void portariaDireito(){
  int localidades;
  printf( "DE ONDE SÃO OS ADMITIDOS?\n"
          "1 – APENAS SEDE E REGIÃO METROPOLITANA\n"
          "2 – APENAS REGIONAIS\n"
          "3 – OS DOIS: ENGLOBA TANTO A SEDE E REGIÃO METROPOLITANA E REGIONAIS\n");

  scanf("%d", &localidades);

  FILE *direito = fopen("PortariaDireito.txt", "w");

  switch{
    case 1:
    fprintf(direito, )
  }


  fclose(direito);
}