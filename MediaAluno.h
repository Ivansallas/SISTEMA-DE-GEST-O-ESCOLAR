#include <stdio.h>
//definir a extensão do arquivo como .h para importação em outro arquivo

//função calcular media
float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

//função para determinar a nota final
char determinarNotaFinal(float media) {
    if (media >= 7.0) {
        return 'Aprovado'; // Aprovado
    } else if (media >= 5.0) {
        return 'Recuperação'; // Recuperação
    } else {
        return 'Reprovado'; // Reprovado
    }
}
