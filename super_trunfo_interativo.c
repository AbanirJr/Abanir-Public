/* VERSÃO DO SUPER TRUNFO REFERENTE AOS NÍVEIS AVENTUREIRO E MESTRE DO TEMA 3
   RECEBE OS DADOS DAS CARTAS DO USUÁRIO
   CALCULA O PIB PER CAPITA, DENSIDADE POPULACIONAL
   PEDE ATÉ DOIS ATRIBUTOS DO USUÁRIO PARA COMPARAÇÃO DAS CARTAS
   AO FINAL, COMPARA AS CARTAS COM BASE NOS ATRIBUTOS ESCOLHIDOS E MOSTRA AS INFORMAÇÕES DAS CARTAS */

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
  int OPCAO1=0;
  int OPCAO2=0;
  
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

// CRIA O MENU INTERATIVO PARA ESCOLHA PELO USUÁRIO DOS ATRIBUTOS PARA COMPARAÇÃO
  menu:    
    printf ("\n\n ESCOLHA DOS ATRIBUTOS DAS CARTAS PARA DETERMINAÇÃO DA CARTA VENCEDORA \n\n");
    printf ("1 - População \n");
    printf ("2 - Área \n");
    printf ("3 - Produto Interno Bruto (PIB) \n");
    printf ("4 - Pontos Turísticos \n");
    printf ("5 - PIB PER CAPITA \n");
    printf ("6 - Densidade Populacional \n");
    printf ("\n Digite o Primeiro Atributo: ");
    scanf ("%d",&OPCAO1);
    printf ("\n Digite o Segundo Atributo: ");
    scanf ("%d",&OPCAO2);
    if (OPCAO1 == OPCAO2)
    { printf ("Atributo já Selecionado na Opção Anterior. Repita a Operação !!");
      goto menu;}
    
//COMPARANDO AS DUAS CARTAS
  SUPER_POWER1=0.0;
  SUPER_POWER2=0.0;
  switch (OPCAO1)
  {
    case 1:
    { if (HABITANTES1>HABITANTES2)
      { printf ("\n Carta 1 tem mais habitantes !!!");
        SUPER_POWER1 += HABITANTES1; }
      else 
      { printf ("\n Carta 2 tem mais habitantes !!!");
        SUPER_POWER2 += HABITANTES2; }   
      printf ("\n População de %s: %d habitantes.",CIDADE1,HABITANTES1);
      printf ("\n População de %s: %d habitantes.",CIDADE2,HABITANTES2);        
      break; }
    case 2:
    { if (AREA1>AREA2)
      { printf ("\n Carta 1 tem maior área !!!");
        SUPER_POWER1 += AREA1; }
      else  
      { printf ("\n Carta 2 tem maior área !!!");
        SUPER_POWER2 += AREA2; }
      printf ("\n Área de %s: %.2f km².",CIDADE1,AREA1);
      printf ("\n Área de %s: %.2f km².",CIDADE2,AREA2);   
      break; }
    case 3:
    { if (PIB1>PIB2)
      { printf ("\n Carta 1 tem maior PIB !!!");
        SUPER_POWER1 += PIB1; }
      else  
      { printf ("\n Carta 2 tem maior PIB !!!");
        SUPER_POWER2 += PIB2; }
      printf ("\n PIB de %s: R$ %.2f.",CIDADE1,PIB1);
      printf ("\n PIB de %s: R$ %.2f.",CIDADE2,PIB2);     
      break; }
    case 4:
    { if (PT_TUR1>PT_TUR2)
      { printf ("\n Carta 1 tem mais pontos turísticos !!!");
        SUPER_POWER1 += PT_TUR1; }
      else  
      { printf ("\n Carta 2 tem mais pontos turísticos !!!");
        SUPER_POWER2 += PT_TUR2; }
      printf ("\n O Município de %s tem %d pontos turísticos.",CIDADE1,PT_TUR1);
      printf ("\n O Município de %s tem %d pontos turísticos.",CIDADE2,PT_TUR2);   
      break; }
    case 5:
    { if (PIB_PER_CAPITA1>PIB_PER_CAPITA2)
      { printf ("\n Carta 1 tem maior PIB PER CAPITA !!!");
        SUPER_POWER1 += PIB_PER_CAPITA1; }
      else  
      { printf ("\n Carta 2 tem maior PIB PER CAPITA !!!");
        SUPER_POWER2 += PIB_PER_CAPITA2; }
      printf ("\n PIB PER CAPITA de %s: R$ %.2f.",CIDADE1,PIB_PER_CAPITA1);
      printf ("\n PIB PER CAPITA de %s: R$ %.2f.",CIDADE2,PIB_PER_CAPITA2);   
      break; }
    case 6:
    { if (DENSIDADE_POP1>DENSIDADE_POP2)
      { printf ("\n Carta 1 tem maior densidade populacional !!!");
        SUPER_POWER1 += (1/DENSIDADE_POP1); }
      else  
      { printf ("\n Carta 2 tem maior densidade populacional !!!"); 
        SUPER_POWER2 += (1/DENSIDADE_POP2); }
      printf ("\n Densidade Populacional de %s: %.2f habitantes/km².",CIDADE1,DENSIDADE_POP1);
      printf ("\n Densidade Populacional de %s: %.2f habitantes/km².",CIDADE2,DENSIDADE_POP2);   
      break; }
    default:
    { printf ("\n Opção 1 Inválida. Repita a Operação !!");
      goto menu; } 
  }
  switch (OPCAO2)
  {
    case 1:
    { if (HABITANTES1>HABITANTES2)
      { printf ("\n Carta 1 tem mais habitantes !!!");
        SUPER_POWER1 += HABITANTES1; }
      else 
      { printf ("\n Carta 2 tem mais habitantes !!!");
        SUPER_POWER2 += HABITANTES2; }   
      printf ("\n População de %s: %d habitantes.",CIDADE1,HABITANTES1);
      printf ("\n População de %s: %d habitantes.",CIDADE2,HABITANTES2);        
      break; }
    case 2:
    { if (AREA1>AREA2)
      { printf ("\n Carta 1 tem maior área !!!");
        SUPER_POWER1 += AREA1; }
      else  
      { printf ("\n Carta 2 tem maior área !!!");
        SUPER_POWER2 += AREA2; }
      printf ("\n Área de %s: %.2f km².",CIDADE1,AREA1);
      printf ("\n Área de %s: %.2f km².",CIDADE2,AREA2);   
      break; }
    case 3:
    { if (PIB1>PIB2)
      { printf ("\n Carta 1 tem maior PIB !!!");
        SUPER_POWER1 += PIB1; }
      else  
      { printf ("\n Carta 2 tem maior PIB !!!");
        SUPER_POWER2 += PIB2; }
      printf ("\n PIB de %s: R$ %.2f.",CIDADE1,PIB1);
      printf ("\n PIB de %s: R$ %.2f.",CIDADE2,PIB2);     
      break; }
    case 4:
    { if (PT_TUR1>PT_TUR2)
      { printf ("\n Carta 1 tem mais pontos turísticos !!!");
        SUPER_POWER1 += PT_TUR1; }
      else  
      { printf ("\n Carta 2 tem mais pontos turísticos !!!");
        SUPER_POWER2 += PT_TUR2; }
      printf ("\n O Município de %s tem %d pontos turísticos.",CIDADE1,PT_TUR1);
      printf ("\n O Município de %s tem %d pontos turísticos.",CIDADE2,PT_TUR2);   
      break; }
    case 5:
    { if (PIB_PER_CAPITA1>PIB_PER_CAPITA2)
      { printf ("\n Carta 1 tem maior PIB PER CAPITA !!!");
        SUPER_POWER1 += PIB_PER_CAPITA1; }
      else  
      { printf ("\n Carta 2 tem maior PIB PER CAPITA !!!");
        SUPER_POWER2 += PIB_PER_CAPITA2; }
      printf ("\n PIB PER CAPITA de %s: R$ %.2f. \n",CIDADE1,PIB_PER_CAPITA1);
      printf ("\n PIB PER CAPITA de %s: R$ %.2f. \n",CIDADE2,PIB_PER_CAPITA2);   
      break; }
    case 6:
    { if (DENSIDADE_POP1>DENSIDADE_POP2)
      { printf ("\n Carta 1 tem maior densidade populacional !!!");
        SUPER_POWER1 += (1/DENSIDADE_POP1); }
      else  
      { printf ("\n Carta 2 tem maior densidade populacional !!!"); 
        SUPER_POWER2 += (1/DENSIDADE_POP2); }
      printf ("\n Densidade Populacional de %s: %.2f habitantes/km².",CIDADE1,DENSIDADE_POP1);
      printf ("\n Densidade Populacional de %s: %.2f habitantes/km².",CIDADE2,DENSIDADE_POP2);   
      break; }    
    default:
    { printf ("\n Opção 2 Inválida. Repita a Operação !!");
      goto menu; } 
  }
// DEFININDO A CARTA VENCEDORA 
  printf ("\n Total Score da Carta 1: %.2f.",SUPER_POWER1);
  printf ("\n Total Score da Carta 2: %.2f.",SUPER_POWER2);
  if (SUPER_POWER1 > SUPER_POWER2)
    printf (" \n\n CARTA 1 É VENCEDORA !!!");
  else
    if (SUPER_POWER1 < SUPER_POWER2)
      printf (" \n\n CARTA 2 É VENCEDORA !!!");
    else
      printf (" \n\n OCORREU EMPATE !!!"); 
}      
