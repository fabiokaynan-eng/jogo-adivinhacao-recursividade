#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>    


// Função responsável por realizar as tentativas do jogador
void jogar(int numeroSecreto, int tentativa, int maxTentativas) {

    int palpite; 

    
    printf("\nTentativa %d de %d", tentativa, maxTentativas);

    printf("\nDigite seu palpite: ");

    scanf("%d", &palpite);

    // Verifica se o jogador acertou
    if (palpite == numeroSecreto) {

        printf("\nParabens! Voce acertou!\n");

        printf("Numero de tentativas: %d\n", tentativa);

        return;
    }

    if (palpite < numeroSecreto) {

        printf("O numero secreto e MAIOR que %d.\n", palpite);

    } else {

        printf("O numero secreto e MENOR que %d.\n", palpite);
    }

    if (tentativa < maxTentativas) {

        // Chama a função novamente com a próxima tentativa
        jogar(numeroSecreto, tentativa + 1, maxTentativas);

    } else {

        printf("\nVoce perdeu!\n");

        printf("O numero secreto era: %d\n", numeroSecreto);
    }
}


int escolherNivel() {

    int nivel; 

    printf("\n=================================\n");
    printf("\tESCOLHA O NIVEL\n");
    printf("=================================\n");

    printf("1 - Facil (10 chances)\n");
    printf("2 - Medio (5 chances)\n");
    printf("3 - Dificil (3 chances)\n");

    printf("Escolha: ");

    scanf("%d", &nivel);

    return nivel;
}


void iniciarJogo() {

    int nivel;           
    int tentativas;      
    int numeroSecreto;   
    char novamente;      

    nivel = escolherNivel();

    if (nivel == 1) {

        tentativas = 10;

    } else if (nivel == 2) {

        tentativas = 5;

    } else if (nivel == 3) {

        tentativas = 3;

    } else {

        printf("\nNivel invalido!\n");

        return;
    }

    // Gera um número aleatório entre 1 e 100
    numeroSecreto = rand() % 100 + 1;

    
    printf("\n=================================\n");
    printf("JOGO DE ADIVINHACAO\n");
    printf("=================================\n");

    printf("Tente adivinhar um numero de 1 a 100!\n");

    // Começa o jogo
    jogar(numeroSecreto, 1, tentativas);

    printf("\nDeseja jogar novamente? (s/n): ");

    scanf(" %c", &novamente);

    if (novamente == 's' || novamente == 'S') {

        // Inicia uma nova partida
        iniciarJogo();

    } else {

        printf("\nObrigado por jogar!\n");
    }
}


int main() {

    int opcao; 

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    do {

        printf("\n=================================\n");
        printf(" JOGO DE ADIVINHACAO\n");
        printf("=================================\n");

        printf("1 - Iniciar jogo\n");
        printf("2 - Sair\n");

        printf("Escolha uma opcao: ");

        // Lê a opção escolhida
        scanf("%d", &opcao);

        if (opcao == 1) {

            iniciarJogo();

        } else if (opcao == 2) {

            printf("\nPrograma encerrado.\n");

        // Caso escolha uma opção inexistente
        } else {

            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 2);

    return 0;
}