#include <stdio.h>

int main(void) {
    double a;            /* primeiro valor */
    double b;            /* segundo valor */
    double c;            /* terceiro valor */
    double maior;        /* maior valor */
    double menor;        /* menor valor */
    double media;        /* média */

    /* Entrada */
    printf("Digite tres valores nao inteiros separados por espaco: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    /* Calcula maior */
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    /* Calcula menor */
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    /* Calcula media */
    media = (a + b + c) / 3.0;

    /* Saida */
    printf("Maior: %.6g\n", maior);
    printf("Menor: %.6g\n", menor);
    printf("Media: %.6g\n", media);

    return 0;
}
