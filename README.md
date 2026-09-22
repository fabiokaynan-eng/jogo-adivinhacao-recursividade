# Jogo de Adivinhação

## Integrantes

- Bruno Rocha de Souza — RA: 2819449
- Bruno Samuel de Camargo Cardoso — RA: 2102587
- Fabio Kaynan Ignacio Ramos — RA: 2779684
- Pedro Vinicius Rampim — RA: 2779781

## Sobre o projeto

Este projeto foi desenvolvido para a disciplina de **Estrutura de Dados**.

A ideia foi criar um jogo simples de adivinhação utilizando a linguagem **C** e aplicar o conceito de **recursividade** na prática.

No jogo, o computador escolhe aleatoriamente um número entre **1 e 100** e o jogador precisa tentar descobrir qual é esse número.

O jogador pode escolher entre três níveis de dificuldade:

- **Fácil:** 10 tentativas
- **Médio:** 5 tentativas
- **Difícil:** 3 tentativas

Durante as tentativas, o jogo informa se o número escolhido pelo jogador é maior ou menor que o número secreto.

## Recursividade

A recursividade foi utilizada na função `jogar()`.

Quando o jogador erra o número e ainda possui tentativas disponíveis, a própria função `jogar()` é chamada novamente para realizar a próxima tentativa.

A função para de chamar a si mesma quando o jogador acerta o número ou quando todas as tentativas acabam.

Dessa forma, conseguimos aplicar o conceito de recursividade dentro de uma situação prática e simples.

## Como rodar a aplicação

### 1. Abra o terminal na pasta do projeto

Primeiro, abra o terminal dentro da pasta onde está o arquivo `main.c`.

No VS Code, também é possível abrir o terminal pelo menu:

**Terminal → New Terminal**

### 2. Compile o programa

Se estiver utilizando o GCC, execute:

```bash
gcc main.c -o jogo
```

Esse comando compila o arquivo `main.c` e cria o executável chamado `jogo`.

### 3. Execute o programa

#### VSCOD

```bash
./jogo.exe
```

## Como jogar

Ao iniciar o programa, aparecerá o menu principal:

```text
JOGO DE ADIVINHAÇÃO

1 - Iniciar jogo
2 - Sair

Escolha uma opção:
```

### Iniciar jogo

Escolhendo a opção `1`, o programa apresenta os níveis de dificuldade:

```text
ESCOLHA O NIVEL

1 - Facil (10 chances)
2 - Medio (5 chances)
3 - Dificil (3 chances)
```

Depois de escolher o nível, o computador sorteia um número entre **1 e 100**.

O jogador deverá tentar descobrir o número secreto.

A cada tentativa, o programa informa uma dica:

- Se o palpite for menor que o número secreto, informa que o número secreto é **maior**;
- Se o palpite for maior que o número secreto, informa que o número secreto é **menor**;
- Se o palpite estiver correto, o jogador vence e o programa informa a quantidade de tentativas utilizadas.

Caso todas as tentativas sejam utilizadas sem acertar, o programa informa que o jogador perdeu e mostra o número secreto.

## Estrutura do projeto

Atualmente, o projeto possui o seguinte arquivo principal:

```text
Jogo-de-Adivinhacao/
│
├── main.c
└── README.md
```

### `main.c`

Contém toda a implementação do jogo, incluindo:

- Menu principal;
- Escolha do nível de dificuldade;
- Geração do número aleatório;
- Sistema de tentativas;
- Função recursiva `jogar()`;
- Verificação dos palpites;
- Mensagens de vitória e derrota.

### `README.md`

Este arquivo contém as informações do projeto e as instruções necessárias para compilar e executar a aplicação.

## Objetivo

O principal objetivo do projeto é desenvolver um jogo simples em linguagem C e demonstrar, de forma prática, a utilização do conceito de **recursividade** em uma aplicação.