<h1 align="center">Calculadora em C</h1>

<p align="center">
  Esse projeto é uma <b>calculadora simples</b> em <b>linguagem C</b> baseada em texto que funciona inteiramente no terminal (CLI)
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Linguagem-C-blue">
  <img src="https://img.shields.io/badge/Status-Concluído-green">
  <img src="https://img.shields.io/badge/Licença-MIT-lightgrey">
</p>

## Funcionalidades principais

  As operações disponíveis são:
- Adição
- Subtração
- Multiplicação
- Divisão

## Imagem do terminal

<img width="453" height="275" alt="image" src="https://github.com/user-attachments/assets/69dd0be2-1041-4468-8ae7-599ccfd062ac" />

## Instalação e Pré-requisitos

Este projeto foi feito utilizando o [**OnlineGDB**](https://www.onlinegdb.com), um compilador online para várias linguagens.
Não é necessário instalar nenhum programa no computador para executar o projeto.

### Como executar
1. Acesse o site do OnlineGDB.
2. Selecione a linguagem **C**.
3. Copie e cole o código do projeto no editor.
4. Clique em **Run** para compilar e executar o programa.
5. Interaja com a calculadora pelo terminal.

## Uso e Exemplos

Ao executar o programa, o seguinte menu será exibido:

```bash
===============================
   Calculadora Simples
===============================
Selecione uma operacao:
1. Adicao
2. Subtracao
3. Multiplicacao
4. Divisao
5. Sair
Opcao:
```
de acordo com a opção escolhida, a calculadora realiza uma das suas funções.

### Exemplo 1
```bash
Opcao: 1
```
A calculadora então pedirá por dois números.

```bash
Digite o primeiro numero: 5  
Digite o segundo numero: 3
```
A saída exibida será

```bash
Resultado: 5.00 + 3.00 = 8.00  
Deseja realizar outra operacao? (s/n):
```
Caso o usuário escolha sair, o programa vai exibir a seguinte mensagem

```bash
Obrigado por usar a calculadora! Ate a proxima.
```

caso escolha realizar, o menu inicial será exibido novamente.

## Estrutura do Projeto

```bash
calculadora/
│── LICENSE
│── README.md
└── main.c
```

### Descrição dos arquivos

- main.c
  Arquivo principal do projeto onde fica toda a lógica da calculadora e suas funções.

- README.md
  Arquivo de documentação que explica sobre o projeto.

- LICENSE
  Este projeto está licenciado sob a MIT License - veja o arquivo [LICENSE](LICENSE) para mais detalhes.  

