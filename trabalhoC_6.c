#include <stdio.h>


// 6. **Questão de Calculadora de Juros Compostos:**

//    Crie um programa que calcula o montante acumulado de um investimento com juros compostos. O programa deve solicitar ao usuário o principal (capital inicial), taxa de juros anual e o número de anos. Em seguida, ele deve usar um loop `for` para calcular o montante acumulado e exibi-lo.



#include <stdio.h>

int main() {
    float principal, j, m;
    int nA;

    printf("Digite o capital inicial: ");
    scanf("%f", &principal);

    printf("Digite a taxa de juros anual (em decimal): ");
    scanf("%f", &j);

    printf("Digite o número de anos: ");
    scanf("%d", &nA);

    for (int ano = 1; ano <= nA; ano++) {
        m = principal * (1 + j);
        principal = m;
        printf("Ano %d: Montante = %.2f\n", ano, m);
    }

    return 0;
}