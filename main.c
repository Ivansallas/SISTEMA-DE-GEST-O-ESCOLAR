#include <stdio.h>
#include "MediaAluno.h"


// main
int main()
{
    float nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    float media = calcularMedia(nota1, nota2, nota3);
    char *resultado = determinarNotaFinal(media);

    printf("A média é: %.2f\n", media);
    printf("Resultado: %s\n", resultado);

    return 0;
}