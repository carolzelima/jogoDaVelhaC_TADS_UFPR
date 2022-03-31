#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*OBSERVA��O 1: VOC� DEVER� DECLARAR UMA MATRIZ BIDIMENSIONAL 3 X 3 E ELA
DEVER� SER UMA VARI�VEL GLOBAL.

OBSERVA��O 2: VOC� PODER� CRIAR OUTRAS FUN��ES CASO DESEJAR, MAS A
CRIA��O DAS FUN��ES DEFINIDAS ACIMA � OBRIGAT�RIA.

CASO ALGUMA DAS FUN��ES ACIMA N�O FOR CRIADA IMPLICAR� EM PERDA DE NOTA.*/

int contador, escolha, dificuldade, simbolo, turno, fim, linha, coluna, resultadoJogada;
char jogador1, jogador2;
char tabuleiro[3][3];

//1
/* esta fun��o preenche a posi��o informada pelos par�metros lin (linha) e col (coluna)
com �X� ou �O� que s�o passados para a fun��o atrav�s de
par�metro jog. A fun��o retorna um dos seguintes valores:
0 � se a jogada � v�lida
1 � se a posi��o informada � inv�lida
2 � se a posi��o informada j� est� preenchida*/
int jogada_usuario(int lin, int col, char jog)
{
    //Verifica se a posi��o informada exise dentro da Matriz
    if(lin > 2 || col > 2)
    {
        return 1;
    }

    //Recupera o simbolo na posi��o.
    char posicao = tabuleiro[lin][col];

    //Verifica se o simbolo na posi��o realmente est� vazio.
    if(posicao != ' ')
    {
        return 2;
    }

    //Assinala o simbolo do jogador na posi��o.
    tabuleiro [lin][col] = jog;
    return 0;
}

//2
/* esta fun��o realiza a jogada do computador. O par�metro jog define se o computador � �X� ou �O�
e o par�metro n�vel define se a jogada do
computador � de n�vel b�sico, intermedi�rio ou avan�ado.
Voc� deve criar uma fun��o para jogada n�vel b�sico do computador;
outra fun��o para a jogada n�vel intermedi�rio do computador;
e outra fun��o para a jogada n�vel avan�ado do computador.
Estas fun��es dever�o ser chamadas dentro desta fun��o jogada_computador.*/
void jogada_computador(char jog, int nivel)
{
    //Verifica o nivel de dificuldade escolhido pelo jogador.
    switch(nivel)
    {
        case '1':
            nivel_basico(jog);
            break;
        case '2':
            nivel_intermediario(jog);
            break;
        case '3':
            nivel_avancado(jog);
            break;
        default:
            break;
    }
}

void nivel_basico(char jog)
{
    int lin = 0;
    int col = 0;
    int ok = 0;

    do
    {
        lin = (rand() % (2 - 0 + 1)) + 0;
        col = (rand() % (2 - 0 + 1)) + 0;

        if(tabuleiro[lin][col] == ' ')
        {
            tabuleiro[lin][col] = jog;
            printf('Linha: %d, Coluna: %d', lin, col);
            ok = 1;
        }
    } while(ok == 0);
}

void nivel_intermediario(char jog)
{
    int lin = 0;
    int col = 0;
    int ok = 0;

    do
    {
        lin = (rand() % (2 - 0 + 1)) + 0;
        col = (rand() % (2 - 0 + 1)) + 0;

        if(tabuleiro[lin][col] == ' ')
        {
            tabuleiro[lin][col] = jog;
            printf('Linha: %d, Coluna: %d', lin, col);
            ok = 1;
        }
    } while(ok == 0);
}
void nivel_avancado(char jog)
{
    int lin = 0;
    int col = 0;
    int ok = 0;

    do
    {
        lin = (rand() % (2 - 0 + 1)) + 0;
        col = (rand() % (2 - 0 + 1)) + 0;

        if(tabuleiro[lin][col] == ' ')
        {
            tabuleiro[lin][col] = jog;
            printf('Linha: %d, Coluna: %d', lin, col);
            ok = 1;
        }
    } while(ok == 0);
}

//3
/*esta fun��o retorna 1 se o usu�rio quer jogar contra o computador ou 2 caso o
usu�rio queira jogar contra outro usu�rio.
Caso o usu�rio queira jogar contra o computador ele tamb�m deve escolher o n�vel da jogada do computador:
b�sico, intermedi�rio ou avan�ado.*/
int menu( )
{
    //A funcionalidade roda em loop Do...While at� que o usu�rio informe uma op��o v�lida.
    do
    {
        printf("Escolha um modo de jogo:\n");
        printf(" 1 - Contra um usuario\n");
        printf(" 2 - Contra o computador\n");
        scanf("%d", &escolha);

        if (escolha == 1)
        {
            printf("Voce escolheu jogar contra outro jogador.\n");
            printf("\n");
        }
        else if(escolha == 2)
        {
            printf("Voce escolheu jogar contra o computador.\n");
            printf("\n");
        }
        else
        {
            printf("Modo de jogo invalido!\n");
            printf("\n");
        }
    } while (escolha < 1 || escolha > 2);

    //O usu�rio s� escolhe uma dificuldade caso ele opte por jogar contra o computador.
    if(escolha == 2)
    {
        //A funcionalidade roda em loop Do...While at� que o usu�rio informe uma op��o v�lida.
        do
        {
            printf("Escolha o nivel de dificuldade da partida:\n");
            printf("1 - facil\n");
            printf("2 - medio\n");
            printf("3 - dificil\n");
            scanf("%d", &dificuldade);

            if (dificuldade == 1)
            {
                printf("Voce escolheu o nivel Facil de dificuldade.\n");
                printf("\n");
            }
            else if(dificuldade == 2)
            {
                printf("Voce escolheu o nivel Medio de dificuldade.\n");
                printf("\n");
            }
            else if(dificuldade == 3)
            {
                printf("Voce escolheu o nivel Dificil de dificuldade.\n");
                printf("\n");
            }
            if(dificuldade < 1 || dificuldade > 3)
            {
                printf("Dificuldade invalida!\n");
                printf("\n");
            }
        }while (dificuldade < 1 || dificuldade > 3);
    }

    //A funcionalidade roda em loop Do...While at� que o usu�rio informe uma op��o v�lida.
    do
    {
        printf("Escolha o simbolo do Jogador 1:\n");
        printf("1 - X\n");
        printf("2 - O\n");
        scanf("%d", &simbolo);

        if (simbolo == 1)
        {
            jogador1 = 'X';
            jogador2 = 'O';
            escolha_simb(&jogador1, &jogador2);
            printf("\n");
        }
        else if(simbolo == 2)
        {
            jogador1 = 'O';
            jogador2 = 'X';
            escolha_simb(&jogador1, &jogador2);
            printf("\n");
        }
        else
        {
            printf("Simbolo invalido!\n");
            printf("\n");
        }
    } while (jogador1 != 'X' && jogador1 != 'O');

    printf("Boa sorte!\n");
    printf("\n");
    return escolha;
}

//4
// esta fun��o define via entrada do usu�rio quem � o jogador �X� e quem � o jogador �O�.
void escolha_simb(char *jog1, char *jog2 )
{
    if(*jog1 == 'X')
    {
        printf("Voce escolheu o X.\n");
    }
    else
    {
        printf("Voce escolheu o O.\n");
    }
}

//5
//esta fun��o inicializa a matriz do jogo da velha com vazio.
void inicializa_velha( )
{
    int lin, col;
    for (lin = 0;lin < 3; lin++)
    {
        for(col = 0; col < 3; col++)
        {
            tabuleiro [lin][col] = ' ';
        }
    }

    //Mostra o tabuleiro iniciado.
    desenha_tabuleiro();
}

//Esta fun��o desenha o tabuleiro no console.
void desenha_tabuleiro()
{
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);//1, 2, 3

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);//4, 5, 6

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);//7, 8, 9

    printf("     |     |     \n\n");
}

//6
//esta fun��o retorna 1 se o jogador ganhou e zero caso contr�rio. O par�metro jog conter� �X� ou �O�.
int verifica_ganhador(char jog)
{
    //Verifica linhas.
    if ((tabuleiro[0][0] == tabuleiro[0][1] && tabuleiro[0][1] == tabuleiro[0][2]) && tabuleiro[0][0] != ' ')
    {
        return tabuleiro[0][0] == jog ? 1 : 0;
    }
    else if ((tabuleiro[1][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[1][2]) && tabuleiro[1][0] != ' ')
    {
        return tabuleiro[1][0] == jog ? 1 : 0;
    }
    else if ((tabuleiro[2][0] == tabuleiro[2][1] && tabuleiro[2][1] == tabuleiro[2][2]) && tabuleiro[2][0] != ' ')
    {
        return tabuleiro[2][0] == jog ? 1 : 0;
    }
    //Verifica colunas.
    else if ((tabuleiro[0][0] == tabuleiro[1][0] && tabuleiro[1][0] == tabuleiro[2][0]) && tabuleiro[0][0] != ' ')
    {
        return tabuleiro[0][0] == jog ? 1 : 0;
    }
    else if ((tabuleiro[0][1] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][1]) && tabuleiro[0][1] != ' ')
    {
        return tabuleiro[0][1] == jog ? 1 : 0;
    }
    else if ((tabuleiro[0][2] == tabuleiro[1][2] && tabuleiro[1][2] == tabuleiro[2][2]) && tabuleiro[0][2] != ' ')
    {
        return tabuleiro[0][2] == jog ? 1 : 0;
    }
    //Verifica diagonais.
    else if ((tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) && tabuleiro[0][0] != ' ')
    {
         return tabuleiro[0][0] == jog ? 1 : 0;
    }
    else if ((tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) && tabuleiro[0][2] != ' ')
    {
        return tabuleiro[0][0] == jog ? 1 : 0;
    }
    //O Jogo ainda n�o acabou.
    else
    {
        return -1;
    }
}

int main(void)
{
    //Inicializa as vari�veis;
    escolha = 0;
    dificuldade = 0;
    jogador1 = ' ';
    jogador2 = ' ';
    turno = 0;
    fim = 0;

    srand(time(NULL));

    //Este loop for for sem par�metros roda indeterminadamente. Um loop infinito do programa.
    for(;;)
    {
        //Chama o menu inicial.
        menu();

        //Inicializa e exibe o tabuleiro.
        inicializa_velha();

        //Alterna entre os turnos dos dois jogadores at� que o jogo tenha um fim.
        do
        {
            linha = 0;
            coluna = 0;
            resultadoJogada = 0;

            if(turno == 0)
            {
                do
                {
                    printf("--JOGADOR 1--\n");
                    printf("\n");

                    printf("Escolha a linha:\n");
                    scanf("%d", &linha);
                    printf("\n");

                    printf("Escolha a coluna:\n");
                    scanf("%d", &coluna);

                    resultadoJogada = jogada_usuario(linha, coluna, jogador1);

                    switch (resultadoJogada)
                    {
                        case 0:
                            printf("Jogada realizada:\n");
                            desenha_tabuleiro();
                            break;

                        case 1:
                            printf("A posicao informada e invalida!\n");
                            printf("\n");
                            break;

                        case 2:
                            printf("A posicao informada ja esta preenchida!\n");
                            printf("\n");
                            break;

                        default:
                            break;
                    }

                    fim = verifica_ganhador(jogador1);

                    switch(fim)
                    {
                        case 0:
                            printf("--Vitoria do JOGADOR 2--\n");
                            printf("\n");
                            break;
                        case 1:
                            printf("--Vitoria do JOGADOR 1--\n");
                            printf("\n");
                            break;
                        case 2:
                            break;
                        default:
                            break;
                    }

                } while (resultadoJogada != 0);
                turno = 1;
            }
            else if (escolha == 2)
            {
                printf("--COMPUTADOR--\n");
                printf("\n");

                jogada_computador(jogador2, dificuldade);
                desenha_tabuleiro();

                fim = verifica_ganhador(jogador2);

                switch(fim)
                {
                    case 0:
                        printf("--Vitoria do JOGADOR 1--\n");
                        printf("\n");
                        break;
                    case 1:
                        printf("--Vitoria do COMPUTADOR--\n");
                        printf("\n");
                        break;
                    case 2:
                        break;
                    default:
                        break;
                }
                turno = 0;
            }
            else
            {
                do
                {
                    printf("--JOGADOR 2--\n");
                    printf("\n");

                    printf("Escolha a linha:\n");
                    scanf("%d", &linha);
                    printf("\n");

                    printf("Escolha a coluna:\n");
                    scanf("%d", &coluna);

                    resultadoJogada = jogada_usuario(linha, coluna, jogador2);

                    switch (resultadoJogada)
                    {
                        case 0:
                            printf("Jogada realizada:\n");
                            desenha_tabuleiro();
                            break;

                        case 1:
                            printf("A posicao informada e invalida!\n");
                            printf("\n");
                            break;

                        case 2:
                            printf("A posicao informada ja esta preenchida!\n");
                            printf("\n");
                            break;

                        default:
                            break;
                    }

                    fim = verifica_ganhador(jogador2);

                    switch(fim)
                    {
                        case 0:
                            printf("--Vitoria do JOGADOR 1--\n");
                            printf("\n");
                            break;
                        case 1:
                            printf("--Vitoria do JOGADOR 2--\n");
                            printf("\n");
                            break;
                        case 2:
                            break;
                        default:
                            break;
                    }
                } while (resultadoJogada != 0);
                turno = 0;
            }
        } while (fim <= 0);
    }
    return 0;
}
