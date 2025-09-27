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
  printf ("Área da Cidade: ");
  scanf ("%f",&AREA1);
  printf ("PIB: ");
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
  printf ("Área da Cidade: ");
  scanf ("%f",&AREA2);
  printf ("PIB: ");
  scanf ("%f",&PIB2);
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d",&PT_TUR2);

// IMPRIMINDO AS DUAS CARTAS
  printf ("\n");
  printf ("CARTAS DO JOGO\n");
  printf ("\n");
  printf ("CARTA %s\n",&CODIGO_CARTA1);
  printf ("\n");
  printf ("Estado: %s\n",&UF1);
  printf ("Município: %s\n",&CIDADE1);
  printf ("População: %d\n",&HABITANTES1);
  printf ("Área do Município: %.2f\n",&AREA1);
  printf ("Produto Interno Bruto: %.2f\n",&PIB1);
  printf ("Pontos Turísticos: %d\n",&PT_TUR1);
  printf ("\n");
  printf ("CARTA %s\n",&CODIGO_CARTA2);
  printf ("\n");
  printf ("Estado: %s\n",&UF2);
  printf ("Município: %s\n",&CIDADE2);
  printf ("População: %d\n",&HABITANTES2);
  printf ("Área do Município: %.2f\n",&AREA2);
  printf ("Produto Interno Bruto: %.2f\n",&PIB2);
  printf ("Pontos Turísticos: %d\n",&PT_TUR2);

}

  
      

