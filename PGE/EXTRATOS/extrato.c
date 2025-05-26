#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// FUNÇÃO INSERIR NOMES //
// não esquecer das partes: 
// 1. Houve alteração no valor da bolsa?
// 2. Há alguma resolução mais recente?

// PRODUZINDO OS EXTRATOS //

void extratos_Direito(){
        char dataAdmissao[20];
        int escolha;
        int resp;

  printf( "ATENÇÃO: CADA CADA DATA DE ADMISSÃO DEVE TER UM EXTRATO DIFERENTE\n"
          "Insira a data de admissao (DD/MM/AAAA): ");
  scanf("%s", dataAdmissao); 

        // Número e data da Portaria //
        int numPort;
        printf("Digite o numero da Portaria: ");
        scanf("%d", &numPort);

        char dataPort;
        printf("Digite a data da portaria (DD.MM.AAAA): ");
        scanf("%c", &dataPort);

// SEDE E REGIONAIS --> SÓ PRA DIREITO //
  printf( "\nDe onde sao os admitidos?\n"
          "1 – Apenas regiao metropolitana (SEDE, 1ª, 2ª e 13ª PR)\n"
          "2 – Apenas regionais\n"
          "3 – Os dois: engloba tanto regiao metropolitana quanto regionais\n");
  printf("Escolha a opcao: ");
  scanf("%d", &escolha);
        


// NUMERO DO EXAME --> TER AS RESOLUÇÕES DE EXAMES // FAZER UM CASE PRA REGIONAIS E SEDE E OS 2
        
        // VER SE É PLURAL OU NÃO //
        int quantidade;
        printf( "A admissão contem mais de um estagiário?\n"
                "0 - NÃO\n"
                "1 - SIM\n");
        scanf("%d", &quantidade); 

        // Escrever nomes lado a lado e colocar o "e" antes do ultimo
        switch (quantidade){

                case 1:
                // ajeitar e colocar na lista
                printf("o estagiário");
                // Inserir o único nome

                case 2:
                // ajeitar e colocar na lista
                printf("os estagiários");
                // Inserir os nomes com virgulas e um "e antes do ultimo nome"

                        
///////////////////////////////////////////////////////////////

        // Daqui pra baixo provavelmente esta errado // 
  char matrizExtrato[10][300];

  // ESCREVER O EXTRATO // 
  strcpy(matrizExtrato[0], "INSTRUMENTO: TERMOS DE COMPROMISSO DE ESTÁGIO DE PRÁTICA FORENSE E DE ORGANIZAÇÃO JUDICIÁRIA. DATA: ");

  strcpy(matrizExtrato[1], dataAdmissao);

  strcpy(matrizExtrato[2], "PARTES: ESTADO DO RIO DE JANEIRO, através do CENTRO DE ESTUDOS JURÍDICOS da PROCURADORIA GERAL DO ESTADO, ");

  int quantidade;
  printf( "A admissão contem mais de um estagiário?\n"
          "0 - NÃO\n"
          "1 - SIM\n");
  scanf("%d", &quantidade);

  // QUE LINDOOOOO AMOOOO OPERADOR TERNÁRIO !!!! //
  (quantidade == 0)? strcpy(matrizExtrato[3], "e os estagiários: ") : strcpy(matrizExtrato[3], "e o estagiário: ");

  printf("Digite %s, um em cada linha (utilize Ctrl Shift C e Ctrl Shift V para copiar e colar nesse programa)\n", (quantidade == 0)? "os nomes dos admitidos": "o nome do admitido");
  char nomes[1000];

  fgets(nomes, sizeof(nomes), stdin); // Usando fgets para ler a frase

  // Removendo as quebras de linha e adicionando vírgulas e espaços
  int tamanho = strlen(nomes);
  for (int i = 0; i < tamanho; i++) {
      if (nomes[i] == '\n') {
          nomes[i] = ','; // Substituindo quebra de linha por vírgula
          nomes[i + 1] = ' '; // Adicionando espaço após a vírgula
      }
  }
  // Substituindo a última vírgula e espaço por "e" e espaço
  nomes[tamanho - 2] = 'e'; // Substituindo a vírgula por "e"
  nomes[tamanho - 1] = ' '; // Adicionando espaço após "e"

  printf("Frase processada: %s\n", nomes);

  strcpy(matrizExtrato[4], nomes);

  strcpy(matrizExtrato[5], ". – OBJETO: Estágio Forense. Valor da bolsa-auxílio: R$ 1.545,60 (mil, quinhentos e quarenta e cinco reais e sessenta centavos) mensais - PRAZO: 02 (dois) anos. FUNDAMENTO: Decretos nºs 20.855, de 18.11.94; 22.304, de 27.06.96; e 25.999, de 28.01.2000; Resoluções PGE n.os1.159, de 06.05.96, 4.426, de 31.07.2019, ");

  strcpy(matrizExtrato[6], "calma preciso fazer isso ainda");

  printf( "Tem outra admissão?\n"
          "0 - NÃO\n"
          "1 - SIM\n");
  scanf("%d", &resp);
  if (resp == 1){
    extratos_Direito();
  } else {
    return;
  }
}




void extratos_Residentes(){
                char dataAdmissao[20];
                int escolha;
                int resp;

                // não esquecer das partes: 
                // 1. Houve alteração no valor da bolsa?
                // 2. Há alguma resolução mais recente?

                // DATA DA ADMISSÃO //
                printf( "ATENÇÃO: CADA CADA DATA DE ADMISSÃO DEVE TER UM EXTRATO DIFERENTE\n"
                        "Insira a data de admissao (DD/MM/AAAA): ");
                scanf("%s", dataAdmissao); 

                // Número e data da Portaria //
                int numPort;
                printf("Digite o numero da Portaria: ");
                scanf("%d", &numPort);

                char dataPort;
                printf("Digite a data da portaria (DD.MM.AAAA): ");
                scanf("%c", &dataPort);


                // VER SE É PLURAL OU NÃO //
                int quantidade;
                printf( "A admissão contem mais de um residente?\n"
                        "0 - NÃO\n"
                        "1 - SIM\n");
                scanf("%d", &quantidade); 

                // Escrever nomes lado a lado e colocar o "e" antes do ultimo
                switch (quantidade){

                        case 1:
                        // ajeitar e colocar na lista
                        printf("o aluno-residente");
                        // Inserir o único nome

                        case 2:
                        // ajeitar e colocar na lista
                        printf("os alunos-residentes");
                        // Inserir os nomes com virgulas e um "e antes do ultimo nome"
                        

                }



        



        