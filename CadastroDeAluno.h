#include <stdio.h>

char CadastrarAluno(char *nome, int idade, char *curso) {
    // Simula o cadastro de um aluno
    printf("Aluno cadastrado com sucesso!\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Curso: %s\n", curso);
    
    return 1; // Retorna 1 para indicar sucesso
}
char ConsultarAluno(char *nome) {
    // Simula a consulta de um aluno
    printf("Consultando aluno: %s\n", nome);
    
    // Aqui você poderia buscar o aluno em um banco de dados ou lista
    // Para este exemplo, vamos apenas simular que o aluno foi encontrado
    printf("Aluno encontrado!\n");
    
    return 1; // Retorna 1 para indicar que o aluno foi encontrado
}