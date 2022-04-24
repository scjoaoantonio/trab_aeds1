# Sudoku (Programado em C)

Trabalho realizado por alunos de Ciências da Computação - UFSJ (2019)

## Objetivo do Trabalho

O objetivo do trabalho ́é desenvolver o jogo chamado Sudoku, muito
comum em revistas e jornais.

## Lógica

A lógica pensada para o trabalho foi deixar o usuário iniciar o jogo com seu nome, feito isso, é escolhida aleatoriamente e montada uma das dez tabelas disponíveis no programa. O usuário vai preenchendo a tabela, a cada jogada correta ele ganha pontos e incorreta ele perde. No final, quando a tabela é preenchida completamente, mostra se o jogador ganhou ou perdeu e a sua pontuação.

## Execução do Programa

### Menu Inicial

Ao iniciar o programa o jogador deve informar seu nome, logo irá aparecer um menu para selecionar o que deseja fazer, jogar ou sair do jogo. Nessa tela do menu há um tutorial de como jogar sudoku, e algumas observações exclusivas para esse programa.

### Preenchimento da Tabela

Depois disso aparecerá a tabela de um jogo, essa é a hora do jogador digitar o número da linha, tabela e o valor a ser inserido. Esses números deverão ser de 1 a 9, se digitar 0 receberá uma dica, se digitar 10 estará desistindo e a tabela vai ser preenchida automaticamente, se digitar um número diferente desses, deverá preencher novamente até enviar um número válido.

### Fim de Jogo

Quando termina a partida, o programa vai mostrar a tela de game over (se perdeu ou desistiu) ou a tela de vitória, se preencheu corretamente a tabela.
