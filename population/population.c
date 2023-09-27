#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int initialPop, finalPop, years; //variáveis para armazenar população inicial, final e os anos.

    do {
        initialPop = get_int("Start size: "); // Solicitar população inicial.
    } while (initialPop < 9); // Repetir a solicitação até que seja um número maior ou igual a 9.

    do {
        finalPop = get_int("End size: "); // Solicitar população final
    } while (finalPop < initialPop); // Repetir a solicitação até que seja um número maior ou igual a população inicial.

    for (years = 0; initialPop < finalPop; years++) {
        initialPop = initialPop + initialPop / 3 - initialPop / 4; //Calcula o número da população a cada ano até que seja menor que a população final.
    }

    printf("Years: %i\n", years); // Imprime o número de anos.
}
