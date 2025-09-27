# include <stdio.h>

void main()
{   
// DECLARANDO AS VARIÁVEIS
  char UF1[2]="  ";
  char CIDADE1[20] = "                    ";
  char CODIGO_CARTA1[3] = "   ";
  int HABITANTES1 = 0;
  float AREA1 = 0.0;
  float PIB1 = 0.0;
  int PT_TUR1 = 0;
  char UF2[2] = "  ";
  char CIDADE2[20] = "                    ";
  char CODIGO_CARTA2[3] = "   ";
  int HABITANTES2 = 0;
  float AREA2 = 0.0;
  float PIB2 = 0.0;
  int PT_TUR2 = 0;
  
// INSERINDO OS DADOS DA CARTA 1
  printf ("Forneça as Informações das Cidades nas Cartas do SUPER TRUNFO \n");
  printf ("\n");
  printf ("CARTA 1");
  printf ("\n");
  printf ("Estado: ");
  scanf ("%c\n",&UF1);
  printf ("Código da Carta: ");
  scanf ("%c\n",&CODIGO_CARTA1);
  printf ("Nome da Cidade: ");
  scanf ("%s\n",&CIDADE1);
  printf ("Número de Habitantes: ");
  scanf ("%d",&HABITANTES1);
  printf ("Área da Cidade: ");
  scanf ("%f",&AREA1);
  printf ("PIB: ");
  scanf ("%f",&PIB1);
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d",&PT_TUR1);

// INSERINDO OS DADOS DA CARTA 2
  printf ("Forneça as Informações das Cidades nas Cartas do SUPER TRUNFO \n");
  printf ("\n");
  printf ("CARTA 2");
  printf ("\n");
  printf ("Estado: ");
  scanf ("%c\n",&UF2);
  printf ("Código da Carta: ");
  scanf ("%c\n",&CODIGO_CARTA2);
  printf ("Nome da Cidade: ");
  scanf ("%s\n",&CIDADE2);
  printf ("Número de Habitantes: ");
  scanf ("%d\n",&HABITANTES2);
  printf ("Área da Cidade: ");
  scanf ("%f\n",&AREA2);
  printf ("PIB: ");
  scanf ("%f\n",&PIB2);
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d\n",&PT_TUR2);

// IMPRIMINDO AS DUAS CARTAS
  printf (" ____________________________________________________________________________________________________ \n");
  printf ("| CARTA %s",&CODIGO_CARTA1,"                                        |  | CARTA %s",&CODIGO_CARTA2,"                                        | \n");
  printf ("|  Estado: %s",&UF1,"                          | | Estado: %s",&UF2,"                          | \n");
  printf ("| Município: %s",&CIDADE1,"                  |  | Município: %s",&CIDADE2,"                  | \n");
  printf ("População: %d",&HABITANTES1,"                 |  | População: %d",&HABITANTES2,"            | \n");
  printf ("Área do Município: %.2f",&AREA1,"               |  | Área do Município: %.2f",&AREA2,"          | \n");
  printf ("Produto Interno Bruto: %.2f",&PIB1,"            |  | Produto Interno Bruto: %.2f",&PIB2,"       | \n");
  printf ("Pontos Turísticos: %d",&PT_TUR1,"              |  | Pontos Turísticos: %d",&PT_TUR2,"        | \n");
  printf ("|___________________________________________________________________________________________________| \n");
}

  
      

