#include <stdio.h>

int main(void) {
    int segundos;        /* entrada do objetivo */
    int horas;           /* horas calculadas */
    int minutos;         /* minutos calculados */
    int seg_restantes;   /* segundos restantes */

    /* Entrada */
    printf("Digite um numero inteiro de segundos: ");
    if (scanf("%d", &segundos) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (segundos < 0) {
        printf("Por favor, insira um valor nao negativo.\n");
        return 1;
    }

    /* Cálculo usando apenas variáveis locais */
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    seg_restantes = segundos % 60;

    /* Saída */
    printf("%d segundos = %d hora(s), %d minuto(s) e %d segundo(s)\n",
           segundos, horas, minutos, seg_restantes);

    return 0;
}
