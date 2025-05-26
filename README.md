# Sistema de Gestão Escolar

Este projeto é um sistema simples de gestão escolar desenvolvido em linguagem C, com o objetivo de registrar e gerenciar informações de alunos, professores, turmas e matrículas. Foi desenvolvido de forma colaborativa por alunos com fins educacionais.

## 📚 Funcionalidades

- Cadastro, consulta e exclusão de **alunos**
- Cadastro, consulta e exclusão de **professores**
- Criação e listagem de **turmas**
- Realização de **matrículas** de alunos em turmas
- Armazenamento dos dados em arquivos `.txt`

## 🛠️ Tecnologias

- Linguagem C
- Armazenamento em arquivos de texto
- Compilação com `gcc` e automação com `Makefile`

## 📂 Estrutura do Projeto

- `src/`: Arquivos-fonte principais
- `include/`: Arquivos de cabeçalho
- `dados/`: Armazenamento de dados
- `README.md`: Este arquivo de documentação
- `Makefile`: Automatiza a compilação do projeto

sistema-gestao-escolar/
│
├── src/                    # Código-fonte principal em C
│   ├── main.c              # Função principal do programa
│   ├── aluno.c             # Funções para gerenciar alunos
│   ├── professor.c         # Funções para gerenciar professores
│   ├── turma.c             # Funções para gerenciar turmas
│   ├── matricula.c         # Lógica de matrículas
│   └── util.c              # Funções auxiliares (validação, menus, etc.)
│
├── include/                # Arquivos de cabeçalho (.h)
│   ├── aluno.h
│   ├── professor.h
│   ├── turma.h
│   ├── matricula.h
│   └── util.h
│
├── dados/                  # Arquivos para armazenar dados (simulação de banco)
│   ├── alunos.txt
│   ├── professores.txt
│   ├── turmas.txt
│   └── matriculas.txt
│
├── README.md               # Documentação do projeto
└── Makefile                # Automação da compilação


## ▶️ Como Executar

1. Compile o projeto:

```bash
make

👨‍👩‍👧‍👦 Equipe
Nome Júlia Argueles

Nome do Julia Alves

Nome do Professor Orientador

📌 Observações
O sistema será expandido conforme o andamento do trabalho;

Versões futuras poderão incluir ordenação, playlists e exportação de dados.
