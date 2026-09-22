# Jogo de Adivinhação

## Integrantes

- Bruno Rocha de Souza — RA: 2819449
- Bruno Samuel de Camargo Cardoso — RA: 2102587
- Fabio Kaynan Ignacio Ramos — RA: 2779684
- Pedro Vinicius Rampim — RA: 2779781

## Sobre o projeto

Este projeto foi desenvolvido para a disciplina de Estrutura de Dados.

A ideia foi criar um jogo simples de adivinhação utilizando a linguagem C e aplicar o conceito de *recursividade* na prática.

No jogo, o computador escolhe aleatoriamente um número entre 1 e 100 e o jogador precisa tentar descobrir qual é esse número.

O jogador pode escolher entre três níveis de dificuldade:

- *Fácil:* 10 tentativas
- *Médio:* 5 tentativas
- *Difícil:* 3 tentativas

Durante as tentativas, o jogo informa se o número escolhido pelo jogador é maior ou menor que o número secreto.

## Recursividade

A recursividade foi utilizada na função jogar().

Quando o jogador erra o número e ainda possui tentativas disponíveis, a própria função jogar() é chamada novamente para realizar a próxima tentativa.

A função para de chamar a si mesma quando o jogador acerta o número ou quando todas as tentativas acabam.

Dessa forma, conseguimos aplicar o conceito de recursividade dentro de uma situação prática e simples.

## Como jogar

Ao iniciar o programa, aparecerá um menu:

1 - Iniciar jogo
2 - Sair