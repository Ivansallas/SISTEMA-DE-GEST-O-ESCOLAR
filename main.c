#include <stdio.h>
#include "MediaAluno.h"
#include "CadastroDeAluno.h"
// main
int main()
{
    char nome[100];
    int idade;
    char curso[100];

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);
    printf("Digite o curso do aluno: ");
    scanf("%s", curso);

    CadastrarAluno(nome, idade, curso);
    // float nota1, nota2, nota3;

    // printf("Digite a primeira nota: ");
    // scanf("%f", &nota1);
    // printf("Digite a segunda nota: ");
    // scanf("%f", &nota2);
    // printf("Digite a terceira nota: ");
    // scanf("%f", &nota3);

    // float media = calcularMedia(nota1, nota2, nota3);
    // char *resultado = determinarNotaFinal(media);

    // printf("A média é: %.2f\n", media);
    // printf("Resultado: %s\n", resultado);

    // return 0;
}