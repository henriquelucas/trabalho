#include <stdio.h>

// 9. **Questão de Contagem de Dígitos:**

//    Escreva um programa que conte o número de dígitos em um número inteiro fornecido pelo usuário. O programa deve usar um loop `while` para realizar a contagem e exibir o resultado.



#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (numero == 0) {
        printf("O numero de digitos e: 1\n");
    } else {
       
        while (numero != 0) {
            contador++;
            numero /= 10;
        }

    printf("O numero de digitos e: %d\n", contador);
    }


    return 0;
}