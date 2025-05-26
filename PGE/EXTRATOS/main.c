#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "extrato.h"


int main(void) {
  int tipo_extrato;
  int resp;

  do {
    printf("Deseja fazer qual portaria?\n"
      "1 - DIREITO\n"
      "2 - RESIDENTES\n"
      "3 - CONVÊNIO NÍVEL TÉCNICO\n"
      "4 - CONVÊNIO NÍVEL SUPERIOR\n"
      "0 - FINALIZAR\n");
    scanf("%d", &tipo_extrato);

    // Número e data da Portaria //
    int numPort;
    printf("Digite o numero da Portaria: ");
    scanf("%d", &numPort);

    char dataPort;
    printf("Digite a data da portaria (DD.MM.AAAA): ");
    scanf("%c", &dataPort);

    switch (tipo_extrato){
      case 1:
      extratos_Direito();

      case 2:
      printf("Só pra não deixar errado!");
    }

  } while (tipo_extrato != 0);

  return 0;
}

//////////////////////////////////////////////////
void estratos_convenio_tecnico(){
  // FAZER MENU COM CEFET E FAETEC
}


void estratos_convenio_Superior(){
  // FAZER MENU COM FACULDADES
  // FAZER MENU COM CONVÊNIO BRASILIA
  char cursos[100];
  

  printf("Digite o nome dos cursos em letras maiusculas:\n");
  // MELHOR FAZER UM MENU COM OS NOMES DOS CURSOS
  // COLOCAR OPÇÃO INFORMÁTICA --> E DENTRO DELA COLOCAR AS OPÇÕES DE INFORMÁTICA SUPERIOR E UM CAMPO PARA ADICIONAR UMA NOVA
  scanf("%c", cursos);

  // VERIFICAR SE É UM CURSO OU MAIS DE UM
  // COLOCAR OS NOMES DOS CURSOS 3 VEZES, NOS LOCAIS CERTOS //


  // verificar se numero do convênio não foi renovado.
}
