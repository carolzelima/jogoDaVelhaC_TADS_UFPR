#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*OBSERVAÇÃO 1: VOCÊ DEVERÁ DECLARAR UMA MATRIZ BIDIMENSIONAL 3 X 3 E ELA
DEVERÁ SER UMA VARIÁVEL GLOBAL.

OBSERVAÇÃO 2: VOCÊ PODERÁ CRIAR OUTRAS FUNÇÕES CASO DESEJAR, MAS A
CRIAÇÃO DAS FUNÇÕES DEFINIDAS ACIMA É OBRIGATÓRIA.

CASO ALGUMA DAS FUNÇÕES ACIMA NÃO FOR CRIADA IMPLICARÁ EM PERDA DE NOTA.
*/
void main(){

int contador,escolha,dificuldade;
char tabuleiro[3][3];

escolha = 0;
dificuldade = 0;

int jogada_usuario(int lin, int col, char jog){//1
/* esta função preenche a posição informada pelos parâmetros lin (linha) e col (coluna)
com ‘X’ ou ‘O’ que são passados para a função através de

parâmetro jog. A função retorna um dos seguintes valores:
0 – se a jogada é válida
1 – se a posição informada é inválida
2 – se a posição informada já está preenchida*/
}

void jogada_computador(char jog, int nivel){//2
/* esta função realiza a jogada do computador. O parâmetro jog define se o computador é ‘X’ ou ‘O’
e o parâmetro nível define se a jogada do
computador é de nível básico, intermediário ou avançado.
Você deve criar uma função para jogada nível básico do computador;
outra função para a jogada nível intermediário do computador;
e outra função para a jogada nível avançado do computador.
Estas funções deverão ser chamadas dentro desta função jogada_computador.*/

void nivel_basico(){}
void nivel_intermediario(){}
void nivel_avancado(){}

}

int menu( ){//3
/*esta função retorna 1 se o usuário quer jogar contra o computador ou 2 caso o
usuário queira jogar contra outro usuário.
Caso o usuário queira jogar contra o computador ele também deve escolher o nível da jogada do computador:
básico, intermediário ou avançado.*/

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
// esta função define via entrada do usuário quem é o jogador ‘X’ e quem é o jogador ‘O’.


}

void inicializa_velha( ){//5
//esta função inicializa a matriz do jogo da velha com vazio.
}

int verifica_ganhador(char jog){ //6
//esta função retorna 1 se o jogador ganhou e zero caso contrário. O parâmetro jog conterá ‘X’ ou ‘O’.
}

};


