#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*OBSERVA��O 1: VOC� DEVER� DECLARAR UMA MATRIZ BIDIMENSIONAL 3 X 3 E ELA
DEVER� SER UMA VARI�VEL GLOBAL.

OBSERVA��O 2: VOC� PODER� CRIAR OUTRAS FUN��ES CASO DESEJAR, MAS A
CRIA��O DAS FUN��ES DEFINIDAS ACIMA � OBRIGAT�RIA.

CASO ALGUMA DAS FUN��ES ACIMA N�O FOR CRIADA IMPLICAR� EM PERDA DE NOTA.
*/
void main(){

int contador,escolha,dificuldade;
char tabuleiro[3][3];

escolha = 0;
dificuldade = 0;

int jogada_usuario(int lin, int col, char jog){//1
/* esta fun��o preenche a posi��o informada pelos par�metros lin (linha) e col (coluna)
com �X� ou �O� que s�o passados para a fun��o atrav�s de

par�metro jog. A fun��o retorna um dos seguintes valores:
0 � se a jogada � v�lida
1 � se a posi��o informada � inv�lida
2 � se a posi��o informada j� est� preenchida*/
}

void jogada_computador(char jog, int nivel){//2
/* esta fun��o realiza a jogada do computador. O par�metro jog define se o computador � �X� ou �O�
e o par�metro n�vel define se a jogada do
computador � de n�vel b�sico, intermedi�rio ou avan�ado.
Voc� deve criar uma fun��o para jogada n�vel b�sico do computador;
outra fun��o para a jogada n�vel intermedi�rio do computador;
e outra fun��o para a jogada n�vel avan�ado do computador.
Estas fun��es dever�o ser chamadas dentro desta fun��o jogada_computador.*/

void nivel_basico(){}
void nivel_intermediario(){}
void nivel_avancado(){}

}

int menu( ){//3
/*esta fun��o retorna 1 se o usu�rio quer jogar contra o computador ou 2 caso o
usu�rio queira jogar contra outro usu�rio.
Caso o usu�rio queira jogar contra o computador ele tamb�m deve escolher o n�vel da jogada do computador:
b�sico, intermedi�rio ou avan�ado.*/

 printf("Escolha um modo de jogo: ");
 printf("1 - Contra usuario")
 printf("2 - Contra o computador")
 scanf("%i", escolha);

 if (escolha = 1){

 }
 else if(escolha = 2){
 printf("escolha o nivel de dificuldade da partida:");
 printf("1 - facil");
 printf("2 - medio");
 printf("3 - dificil");
  scanf("%i", dificuldade);

    switch(dificuldade){

    case '1'

    break;
    case '2'

    break;
    case '3'

    break;

    default
    printf("dificuldade invalida");

    }


 }else{
  printf("modo de jogo invalido");
 }

void escolha_simb(char *jog1, char *jog2 ){//4
// esta fun��o define via entrada do usu�rio quem � o jogador �X� e quem � o jogador �O�.


}

void inicializa_velha( ){//5
//esta fun��o inicializa a matriz do jogo da velha com vazio.
}

int verifica_ganhador(char jog){ //6
//esta fun��o retorna 1 se o jogador ganhou e zero caso contr�rio. O par�metro jog conter� �X� ou �O�.
}

};


