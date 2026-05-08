#include <stdio.h>

int main(void) {
    int numero;      /* número lido do usuário */
    int resto;       /* resto da divisão por 2 */

    /* Entrada */
    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    /* Cálculo usando apenas variáveis locais */
    resto = numero % 2;

    /* Saída */
    if (resto == 0) {
        printf("%d eh par.\n", numero);
    } else {
        printf("%d eh impar.\n", numero);
    }

    return 0;
}
