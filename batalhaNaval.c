#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   //VETORES E MATRIZES

    int tab [10][10]= {0};
    
    //imprindo as colunas
    printf("   A B C D E F G H I J\n");
    for (int m = 0; m < 10; m++)
    {
        //imprimir os números das linhas
        printf("%2d ", m + 1);// o '2%d' representa o afastamento da linha de letras em relação à coluna de númeração

    //ocupação do primeiro navio de forma horinzontal (linha 1 , coluna 4)
    for (int i = 0; i <3; i++)
    {
        tab[1][4+i] = 3;//número de ocupação do navio. 
    //[1], representa a linha. [4+i], representa a coluna sendo somada até atingir a condição do loop, imprimindo o número 3.
    }

    //ocupação do navio de forma diagonal
    for (int i = 0; i <3; i++)
    {
        tab[i][i] = 3;//número de ocupação do navio. 
    //[5], representa a linha. [8+1], representa a coluna sendo somada até atingir a condição do loop, imprimindo o número 3.
    }
    
    for (int i = 4; i <= 6; i++) {  // Linhas 4, 5, 6
        tab[i][5] = 5;  // Coluna central da cruz
    }
    for (int j = 4; j <= 6; j++) {  // Colunas 4, 5, 6
        tab[5][j] = 5;  // Linha central da cruz
    }
    /*for (int i = 6; i <= 8; i++) {//cpntrele das linhas do tabuleiro
        for (int j = 6 - (i - 6); j <= 8; j++) {//controla as colunas de cada linha
//Quando i = 6:
//A expressão 6 - (6 - 6) resulta em 6 - 0 = 6. Então, a coluna j começa de 6 na linha 6, preenchendo até a coluna 8, e assim sucessivamente
            if (tab[i][j] == 0) { // garante que a célulaa ser ocupada esteja vazia
                tab[i][j] = 2; // preenche 
            }
        }
    }*/

    // impressão dos tabuleiros
    for (int j = 0; j < 10; j++) {
        printf("%d ", tab[m][j]);  // exibe cada posição do tabuleiro de acordo com os loops acima
    }
    printf("\n");  //quebra de linha para separar as linhas do tabuleiro
    
    }
   


    return 0;
}
