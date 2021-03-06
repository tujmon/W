#include "jogo.h"
    /*
                            *** BATALHA DE RPG DE TURNOS ***
    REFÊNCIA: https://www.youtube.com/watch?v=xFdGrHBAawY&list=PL4OAe-tL47sZaHoNOFzW4Nu2cDYIZ4EmQ&index=23 *
    
        - Batalha de turnos, onde a ação será "dinâmica" (Realiza o turno quem for mais rápido);
        - Características dos personagens: herois/inimigos;
            - Atributos:
                * Nome do Personagem (dado pelo usuário)(MÁX. 2 Personagens);
                * Pontos de vida (padrão: 100);
                * Pontos de força (padrão: 5);
                * Pontos de Defesa (padrão: 5);
                * Pontos de Velocidade (padrão: 3).
                
        - Inventário dos personagens (talvez);
        - Uma série de batalhas;
        - Experiências, níveis, etc (talvez).
    */

int main(void){
    Lista* p;
    char nick[20];
    int i;
    p = inicializa();
    for(i = 0; i < 2; i++){
        do{
            puts("Digite o nome do personagem(MÁX. 20 Caracteres): ");
            scanf("%[^\n]s", nick);
            getchar();
            if(strlen(nick) > 20){
                puts("Nome inválido! Máximo de caracteres: 20\n");
            }
        }while(strlen(nick) > 20);
        p = alocaPersonagem(p, nick);
    }
    imprimePersonagem(p);

    free(p);

    return 0;
}