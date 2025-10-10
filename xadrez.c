// CODIFICAÇÃO DO JOGO DE XADREZ DO TEMA 4 - NÍVEL NOVATO
// MOVIMENTAÇÃO DAS PEÇAS TORRE, RAINHA E BISPO
// EU INOVEI NOS REQUISITOS - EM VEZ DE ESCREVER POR EXTENSO AS POSIÇÕES DE DESLOCAMENTO
// DAS PEÇAS, DESENHEI O TABULEIRO (COM CARACTERES DO TECLADL) MOSTRANDO AS PEÇAS 
// EM CADA POSIÇÃO, DANDO MAIS AÇÃO AO JOGO
// AS CASAS VAZIAS DO TABULEIRO ESTÃO REPRESENTADAS POR - (HÍFEN)
// A TORRE É MOSTRADA PELA LETRA T
// A RAINHA É MOSTRADA PELA LETRA R
// O BISPO PELA LETRA B
// O TABULEIRO TEM 8 LINHAS E 8 COLUNAS

#include <stdlib.h>

void main()
{

// DECLARANDO AS VARIÁVEIS
    char PECA = " ";
    char T_MOV = " ";
    char B_VERT = " ";
    char B_HORIZ = " ";
    int LIN_T = 1;
    int LIN_R = 1;
    int LIN_B = 1;
    int COL_T = 0;
    int COL_R = 3;
    int COL_B = 7;
    char L1[] = ("T","-","-","R","-","-","-","B");
    char L2[] = ("-","-","-","-","-","-","-","-");
    char L3[] = ("-","-","-","-","-","-","-","-");
    char L4[] = ("-","-","-","-","-","-","-","-");
    char L5[] = ("-","-","-","-","-","-","-","-");
    char L6[] = ("-","-","-","-","-","-","-","-");
    char L7[] = ("-","-","-","-","-","-","-","-");
    char L8[] = ("-","-","-","-","-","-","-","-");
    int C = 0;

// CRIA O MENU INTERATIVO PARA ESCOLHA PELO USUÁRIO DA PEÇA A SER MOVIMENTADA
   while (PECA != "F" && PECA != "f")
   {
       system("cls");
       printf ("\n\n Escolha a Peça (B - Bispo | R - Rainha | T - Torre | F - Fim do Jogo) >>> \n\n");
       scanf ("%c",&PECA);
       switch (PECA)
       {
           case ("T" || "t"):
           {   printf ("\n <<< A Torre se Desloca 5 Posições na Direção Horizontal ou Vertical >>> ");
               printf ("\n <<< Faça o Movimento: Cima (E) - Baixo (X) - Esquerda (S) - Direita (D) >>> ");
               scanf (%c,&T_MOV);
               switch (T_MOV)
               {
                   case "E" || "e":
                   {   LIN_T -= 5;
                       if (LIN_T < 1)
                          LIN_T = 1;
                        break;   }
                   case "X" || "x":
                   {   LIN_T += 5;
                       if LIN_T > 8
                          LIN_T = 8;
                        break;   }
                   case "D" || "d":
                   {   COL_T += 5;
                       if COL_T > 7
                          COL_T = 7;
                        break;   }    
                   case "S" || "s":
                   {   COL_T -= 5;
                       if COL_T < 0
                          COL_T = 0;
                        break;   } 
                   default:
                   {   printf ("\n Movimentação Inválida. Repita a Operação !!");
                       break;   }   }  
               break;   
               }
           case ("B" || "b"):
           {   printf ("\n <<< O Bispo se Desloca Apenas na Diagonal >>> ");
               printf ("\n <<< Direção Vertical: Cima (E) - Baixo (X) >>> ");
               scanf (%c,&B_VERT);
               printf ("\n <<< Direção Horizontal: Esquerda (S) - Direita (D) >>> ");
               scanf (%c,&B_HORIZ);
               switch (B_VERT)
               {   
                   case ("E" || "e"):
                   {  

                    }
            

               }   

           }


        


               
               
                   // IMPRIMINDO O TABULEIRO COM AS PEÇAS POSICIONADAS
       printf("\nT--R---B \n");
       for (L=1;L<=8;L++)
       {    

       }



        }
    


    }

   oto menu;} if (OPCAO != "R") || (OPCAO != "r") || (OPCAO != "B") || (OPCAO != "b") || (OPCAO != "T") || (OPCAO != "t") || (OPCAO != "F") || (OPCAO != "f")
    {  printf ("Opção Inválida. Repita a Operação !!");
      g

  
