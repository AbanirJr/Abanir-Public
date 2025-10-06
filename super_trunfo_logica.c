/* VERSÃO DO SUPER TRUNFO ATÉ O NÍVEL MESTRE DO TEMA 2
   RECEBE OS DADOS DAS CARTAS DO USUÁRIO
   CALCULA O PIB PER CAPITA, DENSIDADE POPULACIONAL E SUPER PODER
   AO FINAL, COMPARA AS CARTAS ATRIBUTO POR ATRIBUTO E MOSTRA A CARTA VENCEDORA PARA CADA ATRIBUTO */

#include <stdio.h>

void main()
{   

// DECLARANDO AS VARIÁVEIS
  char UF1[2]="  ";
  char CIDADE1[20]="                    ";
  char CODIGO_CARTA1[3]="   ";
  int HABITANTES1=0;
  float AREA1=0.0;
  float PIB1=0.0;
  int PT_TUR1=0;
  char UF2[2]="  ";
  char CIDADE2[20]="                    ";
  char CODIGO_CARTA2[3]="   ";
  int HABITANTES2=0;
  float AREA2=0.0;
  float PIB2=0.0;
  int PT_TUR2=0;
  float PIB_PER_CAPITA1=0.0;
  float DENSIDADE_POP1=0.0;
  float PIB_PER_CAPITA2=0.0;
  float DENSIDADE_POP2=0.0;
  float SUPER_POWER1=0.0;
  float SUPER_POWER2=0.0;
  
// INSERINDO OS DADOS DA CARTA 1
  printf ("Forneça as Informações das Cidades nas Cartas do SUPER TRUNFO \n");
  printf ("\n");
  printf ("CARTA 1");
  printf ("\n");
  printf ("Estado: ");
  scanf ("%s",&UF1);
  printf ("Código da Carta: ");
  scanf ("%s",&CODIGO_CARTA1);
  printf ("Nome da Cidade: ");
  scanf ("%s",&CIDADE1);
  printf ("Número de Habitantes: ");
  scanf ("%d",&HABITANTES1);
  printf ("Área da Cidade (km²): ");
  scanf ("%f",&AREA1);
  printf ("PIB: R$ ");
  scanf ("%f",&PIB1);
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d",&PT_TUR1);

// INSERINDO OS DADOS DA CARTA 2
  printf ("\n");
  printf ("CARTA 2");
  printf ("\n");
  printf ("Estado: ");
  scanf ("%s",&UF2);
  printf ("Código da Carta: ");
  scanf ("%s",&CODIGO_CARTA2);
  printf ("Nome da Cidade: ");
  scanf ("%s",&CIDADE2);
  printf ("Número de Habitantes: ");
  scanf ("%d",&HABITANTES2);
  printf ("Área da Cidade (km²): ");
  scanf ("%f",&AREA2);
  printf ("PIB: R$ ");
  scanf ("%f",&PIB2);
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d",&PT_TUR2);

// CALCULANDO DENSIDADE POPULACIONAL E PIB PER CAPITA
  PIB_PER_CAPITA1=PIB1/HABITANTES1;
  DENSIDADE_POP1=HABITANTES1/AREA1;
  PIB_PER_CAPITA2=PIB2/HABITANTES2;
  DENSIDADE_POP2=HABITANTES2/AREA2;

// CALCULANDO O SUPER-PODER
  SUPER_POWER1=HABITANTES1+AREA1+PIB1+PT_TUR1+PIB_PER_CAPITA1+(1/DENSIDADE_POP1);  
  SUPER_POWER2=HABITANTES2+AREA2+PIB2+PT_TUR2+PIB_PER_CAPITA2+(1/DENSIDADE_POP2); 

// IMPRIMINDO AS DUAS CARTAS
  printf ("\n");
  printf ("CARTAS DO JOGO\n");
  printf ("\n");
  printf ("CARTA 1\n");
  printf ("\n");
  printf ("Estado: %s\n",UF1);
  printf ("Município: %s\n",CIDADE1);
  printf ("População: %d habitantes \n",HABITANTES1);
  printf ("Área do Município: %.2f km²\n",AREA1);
  printf ("Produto Interno Bruto: R$ %.2f\n",PIB1);
  printf ("Pontos Turísticos: %d\n",PT_TUR1);
  printf ("PIB PER CAPITA: R$ %.2f \n", PIB_PER_CAPITA1);
  printf ("Densidade Populacional: %.2f habitantes/km² \n", DENSIDADE_POP1);  
  printf ("SUPER PODER: %.2f \n",SUPER_POWER1);
  printf ("\n");
  printf ("CARTA 2\n");
  printf ("\n");
  printf ("Estado: %s\n",UF2);
  printf ("Município: %s\n",CIDADE2);
  printf ("População: %d habitantes \n",HABITANTES2);
  printf ("Área do Município: %.2f km² \n",AREA2);
  printf ("Produto Interno Bruto: R$ %.2f\n",PIB2);
  printf ("Pontos Turísticos: %d\n",PT_TUR2);
  printf ("PIB PER CAPITA: R$ %.2f\n ", PIB_PER_CAPITA2);
  printf ("Densidade Populacional: %.2f habitantes/km² \n", DENSIDADE_POP2); 
  printf ("SUPER PODER: %.2f \n",SUPER_POWER2); 

//COMPARANDO AS DUAS CARTAS
  printf ("\n");
  printf ("COMPARAÇÃO DAS CARTAS 1 e 2 POR CADA ATRIBUTO \n\n");
  if (HABITANTES1>HABITANTES2)
    printf ("Carta 1 tem mais habitantes. Carta 1 venceu !!! \n");
  else  
    printf ("Carta 2 tem mais habitantes. Carta 2 venceu !!! \n");
  if (AREA1>AREA2)
    printf ("Carta 1 tem maior área. Carta 1 venceu !!! \n");
  else  
    printf ("Carta 2 tem maior área. Carta 2 venceu !!! \n");
  if (PIB1>PIB2)
    printf ("Carta 1 tem maior PIB. Carta 1 venceu !!! \n");
  else  
    printf ("Carta 2 tem maior PIB. Carta 2 venceu !!! \n");
  if (PT_TUR1>PT_TUR2)
    printf ("Carta 1 tem mais pontos turísticos. Carta 1 venceu !!! \n");
  else  
    printf ("Carta 2 tem mais pontos turísticos. Carta 2 venceu !!! \n");
  if (PIB_PER_CAPITA1>PIB_PER_CAPITA2)
    printf ("Carta 1 tem maior PIB PER CAPITA. Carta 1 venceu !!! \n");
  else  
    printf ("Carta 2 tem maior PIB PER CAPITA. Carta 2 venceu !!! \n");
  if (DENSIDADE_POP1>DENSIDADE_POP2)
    printf ("Carta 1 tem maior densidade populacional. Carta 2 venceu !!! \n");
  else  
    printf ("Carta 2 tem maior densidade populacional. Carta 1 venceu !!! \n");
  if (SUPER_POWER1>SUPER_POWER2)
    printf ("Carta 1 tem mais SUPER PODER. Carta 1 venceu !!! \n");
  else  
    printf ("Carta 2 tem mais SUPER PODER. Carta 2 venceu !!! \n");
}
