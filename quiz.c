#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    
    char nome[20];
    int pontuacao;

}Jogador;

int menu();
void regrasJogo();
void cadastarJogador(Jogador *x, int num);
void jogar(Jogador p[], int num);
void continuar();
void pontuacao(Jogador p[], int num);

//==========================================================

int main(void){

    int teste, numJogadores;
    Jogador j[5];


    do
    {
        teste = menu();

        switch(teste){
            case 1:
                system("cls");
                regrasJogo();
                break;
            case 2:
                system("cls");
                printf("Numeros de jogadores: ");
                scanf("%i", &numJogadores);
                cadastarJogador(j, numJogadores);
                break;
            case 3:
                system("cls");
                jogar(j, numJogadores);
                break;
            case 4:
                system("cls");
                pontuacao(j, numJogadores);
                break;
            case 5:
                system("cls");
                printf("VOLTE SEMPRE!");
                break;
                
            default:
                printf("Opcao invalida! ");
                break;
        }

    } while (teste != 5);
    
    

    return 0;
}

//FUNCTIONS -----------------------------------------

//menu
int menu(){

    int resp;

    printf(" ===========================\n");
    printf("|           MENU            |\n");
    printf("|===========================|\n");
    printf("| [1] - Regras do jogo      |\n");
    printf("| [2] - Cadastrar jogador   |\n");
    printf("| [3] - Jogar               |\n");
    printf("| [4] - Ver pontucao        |\n");
    printf("| [5] - Sair                |\n");
    printf("|___________________________|\n");
    printf("R: ");
    scanf("%i", &resp);

    return resp;
}

//regras do jogo
void regrasJogo(){

    printf(" ==============================\n");
    printf("|             REGRAS           |\n");
    printf("|==============================|\n");
    printf("|                              |\n");
    printf("|  O jogo eh um quiz, ira apa- |\n");
    printf("|  recer 1 pergunta com 4 al-  |\n");
    printf("|  ternativas, quem acertar    |\n");
    printf("|  ira ganhar 1 ponto, quem    |\n");
    printf("|  tiver mais ponto vence!     |\n");
    printf("|______________________________|\n\n");

    continuar();
}

//cadastarJogador -------------------------------------------------------
void cadastarJogador(Jogador x[], int num){
    
    int i;
    
    for(i=0; i<num; i++){

        printf("Digite seu nome: ");
        scanf("%s", x[i].nome);
    }
    continuar();
}

//jogar --------------------------------------------------------------
void jogar(Jogador p[], int num){

    char resp; 
    int i;


    for(i=0; i<num; i++){
        p[i].pontuacao = 0;
        system("cls");
        printf("VEZ DE JOGADOR %i\n\n", i+1);

        printf("1 - Qual foi o primeiro pais que sediou a copa:\n\n");
        printf("a) Inglaterra\n");
        printf("b) Brasil\n");
        printf("c) Uruguai\n");
        printf("d) Franca\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();

        while (getchar() != '\n');

        if(resp != 'c'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'c'){
            p[i].pontuacao += 1;
        }

        system("cls");
        printf("2 - Qual time ganhou o brasileirao de 2001?:\n\n");
        printf("a) Athletico pr\n");
        printf("b) Palmeiras\n");
        printf("c) Flamengo\n");
        printf("d) Sao Caetano\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();
        
        while (getchar() != '\n');

        if(resp != 'a'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'a'){
            p[i].pontuacao += 1;
        }

        system("cls");
        printf("3 - Quantos brasileiroes o Palmeiras possui?:\n\n");
        printf("a) 5\n");
        printf("b) 7\n");
        printf("c) 10\n");
        printf("d) 11\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();

        while (getchar() != '\n');

        if(resp != 'd'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'd'){
            p[i].pontuacao += 1;
        }

        system("cls");
        printf("4 - Quem eh o VERDADEIRO campeao do brasileirao de 1987?:\n\n");
        printf("a) Santos\n");
        printf("b) Flamengo\n");
        printf("c) Sport\n");
        printf("d) Sao Paulo\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();

        while (getchar() != '\n');

        if(resp != 'c'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'c'){
            p[i].pontuacao += 1;
        }
        
        system("cls");
        printf("5 - Quem ganhou o campeonato carioca de 2023?:\n\n");
        printf("a) Flamengo\n");
        printf("b) Botafogo\n");
        printf("c) Vasco\n");
        printf("d) Fluminense\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();

        while (getchar() != '\n');

        if(resp != 'd'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'd'){
            p[i].pontuacao += 1;
        }

        system("cls");
        printf("6 - De quem eh a famosa frase 'Penso, logo existo'?:\n\n");
        printf("a) Platao\n");
        printf("b) Galileu Galilei\n");
        printf("c) Descartes\n");
        printf("d) Socrates\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();

        while (getchar() != '\n');

        if(resp != 'c'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'c'){
            p[i].pontuacao += 1;
        }

        system("cls");
        printf("7 - Qual o nome do presidente do Brasil que ficou conhecido como Jango?:\n\n");
        printf("a) Janio Quadros\n");
        printf("b) Joao Goulart\n");
        printf("c) Getulio Vargas\n");
        printf("d) Joao Figueiredo\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();

        while (getchar() != '\n');

        if(resp != 'b'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'b'){
            p[i].pontuacao += 1;
        }

        system("cls");
        printf("8 - Qual a nacionalidade de Che Guevara?:\n\n");
        printf("a) Cubana\n");
        printf("b) Peruana\n");
        printf("c) Panamenha\n");
        printf("d) Argentina\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();

        while (getchar() != '\n');

        if(resp != 'd'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'd'){
            p[i].pontuacao += 1;
        }

        system("cls");
        printf("9 - Qual a montanha mais alta do Brasil?:\n\n");
        printf("a) Pico da Neblina\n");
        printf("b) Pico Parana\n");
        printf("c) Monte Roraima\n");
        printf("d) Pico da Bandeira\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();

        while (getchar() != '\n');

        if(resp != 'a'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'a'){
            p[i].pontuacao += 1;
        }

        system("cls");
        printf("10 - Qual destes paises eh transcontinental?:\n\n");
        printf("a) Russia\n");
        printf("b) Filipinas\n");
        printf("c) Marrocos\n");
        printf("d) Groenlandia\n");
        printf("-> ");
        fflush(stdin);
        resp = getchar();

        while (getchar() != '\n');

        if(resp != 'a'){
            system("cls");
            printf("Opcao incorreta!");
            continuar();
        }
        if(resp == 'a'){
            p[i].pontuacao += 1;
        }
    }
    continuar();
}

//pontuacao --------------------------------------------------------------
void pontuacao(Jogador p[], int num){

    int i;

    printf("     Nome:\tPontos: ");
    for(i=0; i<num; i++){
        printf("\t\n    %s\t   %i", p[i].nome, p[i].pontuacao);
    }
    continuar();
}

//continuar --------------------------------------------------------------
void continuar(){

    printf("\n");
    system("pause");
    system("cls");

}