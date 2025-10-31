// CODIFICAÇÃO DO JOGO DE XADREZ DO TEMA 4 - NÍVEL NOVATO
// MOVIMENTAÇÃO DAS PEÇAS TORRE, RAINHA E BISPO
// EU INOVEI NOS REQUISITOS - EM VEZ DE ESCREVER POR EXTENSO AS POSIÇÕES DE DESLOCAMENTO
// DAS PEÇAS, DESENHEI O TABULEIRO (COM CARACTERES DO TECLADL) MOSTRANDO AS PEÇAS 
// EM CADA POSIÇÃO, DANDO MAIS AÇÃO AO JOGO
// AS CASAS VAZIAS DO TABULEIRO ESTÃO REPRESENTADAS POR - (HÍFEN)
// A TORRE É MOSTRADA PELA LETRA T
// A RAINHA É MOSTRADA PELA LETRA R
// O BISPO PELA LETRA B
// O CAVALO PELA LETRA C
// O TABULEIRO TEM 8 LINHAS E 8 COLUNAS

#include <stdlib.h>

void main()
{

// DECLARANDO AS VARIÁVEIS
    char PECA = " ";
    char T_MOV = " ";
    char B_VERT = " ";
    char B_HORIZ = " ";
    char R_MOV = " ";
    char C_VERT = " ";
    char C_HORIZ = " ";
    int LIN_T = 1;
    int LIN_R = 1;
    int LIN_B = 1;
    int LIN_C = 1;
    int COL_T = 1;
    int COL_R = 3;
    int COL_C = 5;
    int COL_B = 8;
    int C = 0;
    int L = 0;

// CRIA O MENU INTERATIVO PARA ESCOLHA PELO USUÁRIO DA PEÇA A SER MOVIMENTADA
   while (PECA != "F" && PECA != "f")
   {
   // IMPRIMINDO O TABULEIRO COM AS PEÇAS POSICIONADAS
       system("cls");
       for (L=1;L<=8;L++)
       {    
           for (C=1;C<=8;C++)
           {
               if (L==LIN_T && C==COL_T)
                   printf("T");
               else
                   if (L==LIN_R && C==COL_R)
                       printf("R);
                   else
                       if (L==LIN_B && C==COL_B)
                           printf("B");
                       else
                           if (L==LIN_C && C==COL_C)
                               printf("C")
                           else        
                               printf("-");
           }   
       }
       printf ("\n\n Escolha a Peça Para Movimentar (B - Bispo | R - Rainha | T - Torre | F - Fim do Jogo) >>> ");
       scanf ("%c",&PECA);
       switch (PECA)
       {
           case ("T" || "t"):
           {   printf ("\n <<< A Torre se Desloca 2 Posições na Direção Horizontal ou Vertical >>> ");
               printf ("\n <<< Faça o Movimento: Cima (E) - Baixo (X) - Esquerda (S) - Direita (D) >>> ");
               scanf (%c,&T_MOV);
               switch (T_MOV)
               {
                   case "E" || "e":
                   {   LIN_T -= 2;
                       if (LIN_T < 1)
                          LIN_T = 1;    }
                   case "X" || "x":
                   {   LIN_T += 2;
                       if LIN_T > 8
                          LIN_T = 8;    }
                   case "D" || "d":
                   {   COL_T += 2;
                       if COL_T > 8
                          COL_T = 8;    }    
                   case "S" || "s":
                   {   COL_T -= 2;
                       if COL_T < 1
                          COL_T = 1;    } 
                   default:
                       printf ("\n Movimentação Inválida. Repita a Operação !!"); 
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
                   {   LIN_B -= 1;
                       if (LIN_B < 1)
                          LIN_B = 1;    }
                   case "X" || "x":
                   {   LIN_B += 1;
                       if LIN_B > 8
                          LIN_B = 8;    }
                   default:
                       B_HORIZ = " ";
               }
               switch (B_HORIZ)
               {   
                   case "D" || "d":
                   {   COL_B += 1;
                       if COL_B > 8
                          COL_B = 8;    }    
                   case "S" || "s":
                   {   COL_B -= 1;
                       if COL_B < 1
                          COL_B = 1;    } 
                   default:
                       printf ("\n Movimentação Inválida. Repita a Operação !!");    
               }          
           }
           case ("R" || "R"):
           {   printf ("\n <<< A Rainha se Desloca 3 Posições na Direção Horizontal ou Vertical >>> ");
               printf ("\n <<< Faça o Movimento: Cima (E) - Baixo (X) - Esquerda (S) - Direita (D) >>> ");
               scanf (%c,&R_MOV);
               switch (R_MOV)
               {
                   case "E" || "e":
                   {   LIN_R -= 3;
                       if (LIN_R < 1)
                          LIN_R = 1;    }
                   case "X" || "x":
                   {   LIN_R += 3;
                       if LIN_R > 8
                          LIN_R = 8;    }
                   case "D" || "d":
                   {   COL_R += 3;
                       if COL_R > 8
                          COL_R = 8;    }
                   case "S" || "s":
                   {   COL_R -= 3;
                       if COL_R < 1
                          COL_R = 1;    } 
                   default:
                       printf ("\n Movimentação Inválida. Repita a Operação !!");    
               }    
           }
           case ("C" || "c"):
           {   printf ("\n <<< O Cavalo se Desloca 2 Posições Verticais e em Seguida 1 Posição Horizontal >>> ");
               printf ("\n <<< Direção Vertical: Cima (E) - Baixo (X) >>> ");
               scanf (%c,&C_VERT);
               printf ("\n <<< Direção Horizontal: Esquerda (S) - Direita (D) >>> ");
               scanf (%c,&C_HORIZ);
               switch (C_VERT)
               {   
                   case ("E" || "e"):
                   {   LIN_C -= 2;
                       if (LIN_C < 1)
                          LIN_C = 1;    }
                   case "X" || "x":
                   {   LIN_C += 2;
                       if LIN_C > 8
                          LIN_C = 8;    }
                   default:
                       C_HORIZ = " ";
               }
               switch (C_HORIZ)
               {   
                   case "D" || "d":
                   {   COL_C += 1;
                       if COL_C > 8
                          COL_C = 8;    }    
                   case "S" || "s":
                   {   COL_C -= 1;
                       if COL_C < 1
                          COL_C = 1;    } 
                   default:
                       printf ("\n Movimentação Inválida. Repita a Operação !!");    
               }          
           }
       }
   }
}
        


               
               
   
