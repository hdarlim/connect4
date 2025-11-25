# connect4

![C](https://img.shields.io/badge/language-C-blue?style=flat-square)
![License](https://img.shields.io/badge/license-GPLv3-red?style=flat-square)

uma implementação simples do clássico jogo connect 4 (quatro em linha) para o terminal, escrita em C.

## sobre

este é um jogo para dois jogadores (local) onde o objetivo é alinhar 4 peças consecutivas no tabuleiro. o jogo roda inteiramente no terminal e foi desenvolvido para ambientes linux/unix.

### funcionalidades
- tabuleiro 6x9.
- sistema de turnos (jogador X e jogador O).
- verificação de vitória (horizontal e vertical).
- validação de entrada (impede jogar em colunas inexistentes).

## como rodar

você precisará de um compilador C, como o `gcc`.

1. clone o repositório:

        git clone [https://github.com/hdarlim/connect4.git](https://github.com/hdarlim/connect4.git)
        cd connect4

2. compile o código:

        gcc connect4.c -o connect4

3. execute o jogo:

        ./connect4

## como jogar

o jogo pedirá para você digitar o número da coluna onde deseja soltar sua peça.
- as colunas vão de **0 a 8**.
- o primeiro jogador é o **X**.
- o segundo jogador é o **O**.

vence quem conseguir alinhar 4 símbolos iguais primeiro na horizontal ou vertical.

## licença

este projeto está licenciado sob a **GPLv3**. veja o arquivo [LICENSE](LICENSE) para mais detalhes.
