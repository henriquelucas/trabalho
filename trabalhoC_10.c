#include <stdio.h>

// 10. **Questão de Conversão de Sistema Numérico:**

//     Crie um programa que converta um número decimal fornecido pelo usuário em um número binário. O programa deve usar um loop `for` e estruturas de controle `if` para realizar a conversão e exibir o resultado.



#include <stdio.h>

int main() {
    int numero_decimal, numero_binario=0, peso=1;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero_decimal);

    while (numero_decimal>0) {
        int digito_binario = numero_decimal%2;
        numero_binario=digito_binario*peso+numero_binario;
        peso=peso*10;
        numero_decimal/=2;
    }

    printf("O numero binario e: %d\n", numero_binario);

    return 0;
}
