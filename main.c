// Bibliotecas:
#include <stdlib.h> //numeros aleatorios
#include <stdio.h>  //printf e scanf
#include <time.h>   //tempo
#include <locale.h> //acentuação

// declaração de variáveis gerais
int sudoku[9][9];

int sudoku_tabuleiro[9][9];

void inicializador();

void fim();

// void tutorial();

int check1();

int checkfinal();

void tabuleiro();

// Variáveis:
// void variavel(){
int M0[9][9] = {{0, 7, 0, 4, 0, 0, 5, 0, 0}, {0, 1, 0, 3, 2, 0, 0, 8, 4}, {9, 0, 0, 0, 6, 1, 0, 0, 0}, {0, 0, 5, 0, 8, 0, 0, 2, 9}, {0, 2, 9, 7, 0, 5, 1, 6, 0}, {6, 8, 0, 0, 4, 0, 7, 0, 0}, {0, 0, 0, 8, 1, 0, 0, 0, 7}, {8, 0, 0, 0, 5, 4, 0, 3, 0}, {0, 0, 2, 0, 0, 3, 0, 4, 0}};

int M1[9][9] = {{0, 0, 8, 4, 7, 0, 3, 0, 6}, {0, 6, 0, 0, 0, 2, 0, 1, 0}, {2, 4, 0, 5, 0, 0, 0, 0, 8}, {0, 0, 9, 1, 5, 0, 4, 0, 3}, {0, 7, 0, 0, 0, 0, 0, 5, 0}, {5, 0, 4, 0, 8, 3, 2, 0, 0}, {7, 0, 0, 0, 0, 6, 0, 8, 5}, {0, 9, 0, 7, 0, 0, 0, 3, 0}, {6, 0, 2, 0, 9, 5, 1, 0, 0}};

int M2[9][9] = {{0, 2, 7, 4, 0, 5, 9, 6, 0}, {4, 9, 0, 2, 0, 6, 0, 5, 1}, {0, 0, 1, 0, 0, 0, 0, 7, 0}, {7, 0, 0, 0, 8, 0, 0, 0, 9}, {0, 0, 9, 0, 0, 0, 7, 0, 0}, {1, 0, 0, 0, 6, 0, 0, 0, 5}, {0, 7, 0, 0, 0, 0, 5, 0, 0}, {5, 1, 0, 6, 0, 7, 0, 3, 4}, {0, 4, 2, 8, 0, 3, 6, 1, 0}};

int M3[9][9] = {{7, 0, 8, 0, 3, 0, 0, 0, 6}, {0, 3, 0, 8, 0, 0, 1, 4, 0}, {0, 5, 0, 0, 4, 2, 0, 0, 9}, {0, 0, 7, 0, 2, 0, 0, 6, 0}, {5, 0, 2, 3, 0, 9, 8, 0, 4}, {0, 9, 0, 0, 7, 0, 5, 0, 0}, {8, 0, 0, 1, 9, 0, 0, 2, 0}, {0, 1, 6, 0, 0, 7, 0, 3, 0}, {3, 0, 0, 0, 8, 0, 7, 0, 1}};

int M4[9][9] = {{5, 0, 6, 0, 7, 8, 4, 0, 0}, {9, 0, 0, 0, 0, 0, 0, 2, 0}, {0, 2, 8, 0, 0, 4, 3, 6, 0}, {0, 0, 0, 1, 2, 0, 8, 5, 4}, {0, 0, 0, 9, 0, 3, 0, 0, 0}, {2, 5, 7, 0, 8, 6, 0, 0, 0}, {0, 1, 3, 6, 0, 0, 9, 8, 0}, {0, 4, 0, 0, 0, 0, 0, 0, 5}, {0, 0, 5, 8, 3, 0, 7, 0, 1}};

int M5[9][9] = {{5, 0, 0, 0, 8, 0, 0, 0, 0}, {0, 0, 0, 1, 0, 7, 3, 8, 0}, {6, 0, 0, 0, 0, 2, 1, 7, 9}, {3, 7, 4, 0, 9, 0, 0, 0, 0}, {0, 0, 1, 2, 0, 8, 6, 0, 0}, {0, 0, 0, 0, 1, 0, 5, 9, 3}, {7, 9, 6, 3, 0, 0, 0, 0, 4}, {0, 4, 8, 6, 0, 5, 0, 0, 0}, {0, 0, 0, 0, 4, 0, 0, 0, 2}};

int M6[9][9] = {{0, 0, 0, 0, 9, 4, 7, 0, 0}, {0, 9, 1, 6, 0, 8, 0, 2, 0}, {4, 0, 0, 7, 3, 0, 5, 0, 6}, {0, 0, 0, 8, 0, 0, 1, 0, 5}, {1, 0, 6, 0, 0, 0, 2, 0, 9}, {3, 0, 4, 0, 0, 2, 0, 0, 0}, {5, 0, 2, 0, 8, 9, 0, 0, 3}, {0, 6, 0, 5, 0, 7, 4, 8, 0}, {0, 0, 7, 1, 6, 0, 0, 0, 0}};

int M7[9][9] = {{0, 0, 3, 1, 0, 4, 0, 5, 0}, {6, 8, 0, 3, 0, 0, 2, 7, 0}, {0, 5, 0, 7, 0, 2, 0, 0, 1}, {2, 0, 6, 0, 0, 0, 8, 1, 7}, {0, 0, 0, 0, 0, 0, 0, 0, 0}, {5, 4, 8, 0, 0, 0, 6, 0, 9}, {8, 0, 0, 9, 0, 1, 0, 2, 0}, {0, 7, 4, 0, 0, 3, 0, 6, 8}, {0, 3, 0, 6, 0, 8, 4, 0, 0}};

int M8[9][9] = {{0, 4, 0, 0, 0, 2, 3, 0, 8}, {0, 3, 1, 0, 6, 0, 0, 0, 0}, {7, 9, 0, 1, 8, 0, 0, 6, 0}, {1, 0, 4, 8, 0, 6, 0, 0, 9}, {0, 7, 0, 0, 0, 0, 0, 4, 0}, {9, 0, 0, 7, 0, 4, 5, 0, 2}, {0, 2, 0, 0, 3, 1, 0, 9, 6}, {0, 0, 0, 0, 4, 0, 1, 5, 0}, {3, 0, 5, 6, 0, 0, 0, 7, 0}};

int M9[9][9] = {{5, 0, 6, 0, 0, 9, 0, 0, 8}, {9, 4, 0, 0, 7, 0, 5, 0, 0}, {0, 8, 0, 5, 0, 2, 0, 1, 0}, {0, 5, 0, 4, 6, 0, 0, 0, 7}, {8, 0, 3, 0, 0, 0, 6, 0, 4}, {7, 0, 0, 0, 8, 1, 0, 3, 0}, {0, 9, 0, 7, 0, 6, 0, 5, 0}, {0, 0, 2, 0, 3, 0, 0, 4, 9}, {1, 0, 0, 8, 0, 0, 7, 0, 2}};

//}

// MENU
int menu1()
{
    int begin;
    printf("\n\n######### MENU INICIAL #########\n\n");
    printf("\tEscolha uma opcao:\n\n \t\t1 - JOGAR\n \t\t2 - SAIR\n");
    scanf("%d", &begin);
    if (begin == 1)
    {
        return (begin);
    }
    else if (begin == 2)
    {
        fim();
    }
    // else if(begin==3){
    // tutorial();
    //}
    else
    {
        printf("\nDigite apenas os valores do menu!\n");
    }
}

/*TELA DE TUTORIAL
void tutorial(){
  printf("####### TUTORIAL #######\n\nO objetivo do jogador é completar um grid 9×9 (colunas verticais e linhas horizontais), preenchendo os espaços vazios com números de 1 a 9. Porém, um dado número não pode ser repetido na mesma coluna, linha ou bloco. Em outras palavras, basta o jogador preencher o grid com números sem repeti-los na horizontal, vertical ou nos quadrados menores (de 9 células, quadrados de tamanho 3×3). ");
  menu1();
}*/

// TELA DE FIM DE JOGO
void fim()
{
    printf("\n\n########## SUDOKU ##########\n\n");
}

// INICIAR O JOGO ALEATÓRIAMENTE
void inicializador()
{
    srand(time(0));
    int s;
    s = rand() % 10;
    switch (s)
    {
    case 0:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M0[i][j];
            }
        }
        break;
    case 1:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M1[i][j];
            }
        }
        break;
    case 2:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M2[i][j];
            }
        }
        break;
    case 3:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M3[i][j];
            }
        }
        break;
    case 4:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M4[i][j];
            }
        }
        break;
    case 5:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M5[i][j];
            }
        }
        break;
    case 6:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M6[i][j];
            }
        }
        break;
    case 7:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M7[i][j];
            }
        }
        break;
    case 8:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M8[i][j];
            }
        }
        break;
    case 9:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = M9[i][j];
            }
        }
        break;
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            sudoku_tabuleiro[i][j] = sudoku[i][j];
        }
    }
}

// CHECANDO SE O TABULEIRO ESTA TODO PREENCHIDO
int check1()
{
    int cont = 0;

    for (int i = 0; i < 9; i++)
    {

        for (int j = 0; j < 9; j++)
        {

            if (sudoku_tabuleiro[i][j] != 0)
            {

                cont++;
            }
        }
    }

    if (cont == 81)
    {

        return 1;
    }

    else

        return 0;
}

// CHECANDO SE TA CERTO NO FINAL
int checkfinal()
{

    int contL = 0, contC = 0, contQ1 = 0, contQ2 = 0, contQ3 = 0, contQ4 = 0, contQ5 = 0, contQ6 = 0, contQ7 = 0, contQ8 = 0, contQ9 = 0;

    for (int i = 0; i < 9; i++)
    {

        for (int k = 0; k < 8; k++)
        {

            for (int j = k; j < 8; j++)
            {

                //...CONTANDO ELEMENTOS DAs LINHAS!!

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contL++;
                }

                //...CONTANDO ELEMENTOS DAS COLUNAS...

                if (sudoku_tabuleiro[k][i] != sudoku_tabuleiro[j + 1][i])
                {

                    contC++;
                }
            }
        }
    }

    //...CONTANDO QUADRANTE 1 !!!...

    for (int i = 0; i < 3; i++)
    {

        for (int k = 0; k < 2; k++)
        {

            for (int j = k; j < 2; j++)
            {

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contQ1++;
                }

                if (sudoku_tabuleiro[k][i] != sudoku_tabuleiro[j + 1][i])
                {

                    contQ1++;
                }
            }
        }
    }

    //...CONTANDO QUADRANTE 2 !!!...

    for (int i = 0; i < 3; i++)
    {

        for (int k = 3; k < 5; k++)
        {

            for (int j = k; j < 5; j++)
            {

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contQ2++;
                }
            }
        }
    }

    for (int j = 3; j < 6; j++)
    {

        for (int k = 0; k < 2; k++)
        {

            for (int i = k; i < 2; i++)
            {

                if (sudoku_tabuleiro[k][j] != sudoku_tabuleiro[i + 1][j])
                {

                    contQ2++;
                }
            }
        }
    }

    //...CONTANDO QUADRANTE 3 !!!...

    for (int i = 0; i < 3; i++)
    {

        for (int k = 6; k < 8; k++)
        {

            for (int j = k; j < 8; j++)
            {

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contQ3++;
                }
            }
        }
    }

    for (int j = 6; j < 9; j++)
    {

        for (int k = 0; k < 2; k++)
        {

            for (int i = k; i < 2; i++)
            {

                if (sudoku_tabuleiro[k][j] != sudoku_tabuleiro[i + 1][j])
                {

                    contQ3++;
                }
            }
        }
    }

    //...CONTANDO QUADRANTE 4 !!!...

    for (int i = 3; i < 6; i++)
    {

        for (int k = 0; k < 2; k++)
        {

            for (int j = k; j < 2; j++)
            {

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contQ4++;
                }
            }
        }
    }

    for (int j = 0; j < 3; j++)
    {

        for (int k = 3; k < 5; k++)
        {

            for (int i = k; i < 5; i++)
            {

                if (sudoku_tabuleiro[k][j] != sudoku_tabuleiro[i + 1][j])
                {

                    contQ4++;
                }
            }
        }
    }

    //...CONTANDO QUADRANTE 5 !!!...

    for (int i = 3; i < 6; i++)
    {

        for (int k = 3; k < 5; k++)
        {

            for (int j = k; j < 5; j++)
            {

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contQ5++;
                }

                if (sudoku_tabuleiro[k][i] != sudoku_tabuleiro[j + 1][i])
                {

                    contQ5++;
                }
            }
        }
    }

    //...CONTANDO QUADRANTE 6 !!!...

    for (int i = 3; i < 6; i++)
    {

        for (int k = 6; k < 8; k++)
        {

            for (int j = k; j < 8; j++)
            {

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contQ6++;
                }
            }
        }
    }

    for (int j = 6; j < 9; j++)
    {

        for (int k = 3; k < 5; k++)
        {

            for (int i = k; i < 5; i++)
            {

                if (sudoku_tabuleiro[k][j] != sudoku_tabuleiro[i + 1][j])
                {

                    contQ6++;
                }
            }
        }
    }

    //...CONTANDO QUADRANTE 7 !!!...

    for (int i = 6; i < 9; i++)
    {

        for (int k = 0; k < 2; k++)
        {

            for (int j = k; j < 2; j++)
            {

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contQ7++;
                }
            }
        }
    }

    for (int j = 0; j < 3; j++)
    {

        for (int k = 6; k < 8; k++)
        {

            for (int i = k; i < 8; i++)
            {

                if (sudoku_tabuleiro[k][j] != sudoku_tabuleiro[i + 1][j])
                {

                    contQ7++;
                }
            }
        }
    }

    //...CONTANDO QUADRANTE 8 !!!...

    for (int i = 6; i < 9; i++)
    {

        for (int k = 3; k < 5; k++)
        {

            for (int j = k; j < 5; j++)
            {

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contQ8++;
                }
            }
        }
    }

    for (int j = 3; j < 6; j++)
    {

        for (int k = 6; k < 8; k++)
        {

            for (int i = k; i < 8; i++)
            {

                if (sudoku_tabuleiro[k][j] != sudoku_tabuleiro[i + 1][j])
                {

                    contQ8++;
                }
            }
        }
    }

    //...CONTANDO QUADRANTE 9 !!!...

    for (int i = 6; i < 9; i++)
    {

        for (int k = 6; k < 8; k++)
        {

            for (int j = k; j < 8; j++)
            {

                if (sudoku_tabuleiro[i][k] != sudoku_tabuleiro[i][j + 1])
                {

                    contQ9++;
                }

                if (sudoku_tabuleiro[k][i] != sudoku_tabuleiro[j + 1][i])
                {

                    contQ9++;
                }
            }
        }
    }

    if (contL == 324 && contC == 324 && contQ1 == 18 && contQ2 == 18 && contQ3 == 18 && contQ4 == 18 && contQ5 == 18 && contQ6 == 18 && contQ7 == 18 && contQ8 == 18 && contQ9 == 18)
    {

        return 1;
    }

    else

        return 0;
}

// MONTANDO O TABULEIRO
void tabuleiro()
{
    int j, i;
    printf("\n\n########## SUDOKU ##########\n\n");
    printf("      1  2  3  4  5  6  7  8  9\n");
    printf("     ---------------------------\n");
    for (i = 0; i < 9; i++)
    {
        if (i == 3 || i == 6)
            printf("     ---------------------------\n");
        else
            printf("\n");
        for (j = 0; j < 9; j++)
        {
            if (j == 0)
                printf("%d  - ", i + 1);
            if (j != 2 && j != 5)
            {
                if (sudoku_tabuleiro[i][j] == 0)
                {
                    printf("   ");
                }
                else
                {
                    printf(" %d ", sudoku_tabuleiro[i][j]);
                }
            }
            else
            {
                if (sudoku_tabuleiro[i][j] == 0)
                {
                    printf("  |");
                }
                else
                {
                    printf(" %d|", sudoku_tabuleiro[i][j]);
                }
            }
        }
        printf("\n");
    }
    printf("\n     ---------------------------\n");
    printf("\n\n");
}

// Função principal
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, linha, coluna, valor;
    char nome[50];
    printf("\n\nDigite o nome de usuario: ");
    fgets(nome, 20, stdin);
    printf("\n\nOi ");
    fputs(nome, stdout);
    printf("####### TUTORIAL #######\n\n");
    printf("O objetivo do jogador eh completar um grid 9x9, preenchendo os lugares vazios com numeros de 1 a 9. Entretanto, o jogador deve preencher o grid com numeros sem repeti-los na horizontal, vertical ou nos quadrados menores (de 9 celulas, quadrados de tamanho 3x3).\n");
    printf("Para jogar eh simples, eh soh informar o numero da linha, coluna e o valor. Se quiser remover o numero digitado, basta digitar 0 no valor.\n");
    x = menu1();
    while (x == 1)
    {
        inicializador();
        while (check1() == 0)
        {
            tabuleiro();
            printf("Informe a linha a inserir: ");
            scanf("%d", &linha);
            printf("Informe a coluna a inserir: ");
            scanf("%d", &coluna);
            printf("Informe o valor a inserir:");
            scanf("%d", &valor);
            while (valor < 0 || valor > 9)
            {
                printf("Informe o valor a inserir:");
                scanf("%d", &valor);
            }
            if (sudoku_tabuleiro[linha - 1][coluna - 1] == 0 || sudoku[linha - 1][coluna - 1] != sudoku_tabuleiro[linha - 1][coluna - 1])
            {
                sudoku_tabuleiro[linha - 1][coluna - 1] = valor;
            }
            checkfinal();
        }
        tabuleiro();
        if (checkfinal() == 1)
            printf("Parabens, esta certo!");
        else
            printf("Jogo incorreto!... Tente novamente!\n\n");
        printf("\n\nDeseja jogar novamente?");
        x = menu1();
    }
    printf("\t\tFIM DE JOGO\n");
    return 0;
}
