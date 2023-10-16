#include <stdio.h>


// 8. **Questão de Simulação de Jogo de Adivinhação:**

//    Crie um programa que simule um jogo de adivinhação. O programa deve gerar um número aleatório e permitir que o jogador adivinhe o número. O jogador recebe dicas (maior ou menor) após cada tentativa. Utilize um loop `while` para controlar o jogo e estruturas de controle `if` para fornecer dicas.



#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero_aleatorio, tentativa, tentativas = 0;

    // srand(1234);

    numero_aleatorio = rand() % 100 + 1;

        printf("Bem-vindo ao Jogo de Adivinhacao! Tente adivinhar o numero entre 1 e 100.\n");

    while (numero_aleatorio != tentativa) { 
        printf("Tente adivinhar o numero ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa == numero_aleatorio) {
            printf("Vc acertou o numero %d em %d tentativas.\n", numero_aleatorio, tentativas);
            break;
    } else if (tentativa < numero_aleatorio) {
            printf("Tente um numero maior.\n");
      } else {
            printf("Tente um numero menor.\n");
        }
    }

    return 0;
}