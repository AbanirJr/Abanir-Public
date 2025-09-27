# include <stdio.h>

void main()
{   
// DECLARANDO AS VARIÁVEIS
  char UF1[2];
  char CIDADE1[20];
  char CODIGO_CARTA1[3];
  int HABITANTES1;
  float AREA1;
  float PIB1;
  int PT_TUR1;
  char UF2[2];
  char CIDADE2[20];
  char CODIGO_CARTA2[3];
  int HABITANTES2;
  float AREA2;
  float PIB2;
  int PT_TUR2;
  
// INSERINDO OS DADOS DA CARTA 1
  printf ("Forneça as Informações das Cidades nas Cartas do SUPER TRUNFO \n");
  printf ("\n");
  printf ("CARTA 1");
  printf ("\n");
  printf ("Estado: ");
  scanf ("%s",&UF1[]);
  printf ("\n");
  printf ("Código da Carta: ");
  scanf ("%s",&CODIGO_CARTA1[]);
  printf ("\n");  
  printf ("Nome da Cidade: ");
  scanf ("%s",&CIDADE1[]);
  printf ("\n");
  printf ("Número de Habitantes: ");
  scanf ("%d",&HABITANTES1);
  printf ("\n");
  printf ("Área da Cidade: ");
  scanf ("%.2f",&AREA1);
  printf ("\n");
  printf ("PIB: ");
  scanf ("%.2f",&PIB1);
  printf ("\n");
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d",&PT_TUR1);
  printf ("\n");

// INSERINDO OS DADOS DA CARTA 2
  printf ("Forneça as Informações das Cidades nas Cartas do SUPER TRUNFO \n");
  printf ("\n");
  printf ("CARTA 2");
  printf ("\n");
  printf ("Estado: ");
  scanf ("%s",&UF2[]);
  printf ("\n");
  printf ("Código da Carta: ");
  scanf ("%s",&CODIGO_CARTA2[]);
  printf ("\n");  
  printf ("Nome da Cidade: ");
  scanf ("%s",&CIDADE2[]);
  printf ("\n");
  printf ("Número de Habitantes: ");
  scanf ("%d",&HABITANTES2);
  printf ("\n");
  printf ("Área da Cidade: ");
  scanf ("%.2f",&AREA2);
  printf ("\n");
  printf ("PIB: ");
  scanf ("%.2f",&PIB2);
  printf ("\n");
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d",&PT_TUR2);
  printf ("\n");

// IMPRIMINDO AS DUAS CARTAS
  printf (" ____________________________________________________________________________________________________ \n");
  printf ("| CARTA %s",&CODIGO_CARTA1[],"                                        |  | CARTA %s",&CODIGO_CARTA2[],"                                        | \n");
  printf ("|  Estado: %s",&UF1[],"                          | | Estado: %s",&UF2[],"                          | \n");
  printf ("| Município: %s",&CIDADE1[],"                  |  | Município: %s",&CIDADE2[],"                  | \n");
  printf ("População: %d",&HABITANTES1,"                 |  | População: %d",&HABITANTES2,"            | \n");
  printf ("Área do Município: %.2f",&AREA1,"               |  | Área do Município: %.2f",&AREA2,"          | \n");
  printf ("Produto Interno Bruto: %.2f",&PIB1,"            |  | Produto Interno Bruto: %.2f",&PIB2,"       | \n");
  printf ("Pontos Turísticos: %d",&PT_TUR1,"              |  | Pontos Turísticos: %d",&PT_TUR2,"        | \n");
  printf ("|___________________________________________________________________________________________________| \n");
}

  
      

