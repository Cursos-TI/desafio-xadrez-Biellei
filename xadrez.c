#include <stdio.h>
#include <stdlib.h>

//Sistemas de recursividades
void moverbispo(int casas){
    if(casas > 0){
        printf("cima\n");
        printf("Direita\n");
        moverbispo(casas - 1);
    }
}

void movertorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

void moverrainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
}

int main() {
    int i = 1;
    char escolha;

    //Está pedindo pra escolher a peça
    printf("###JOGO XADREZ###\n");
    printf("Escolha a peça para andar\n");
    printf("A. Bispo\n");
    printf("B. Torre\n");
    printf("C. Rainha\n");
    printf("D. Cavalo\n");
    printf("##ESCOLHA##\n");
    scanf("%c", &escolha);
    
    //Movimentação das peças
    switch (escolha)
    {
    case 'A':
    case 'a':
        printf("***Bispo vai andar***\n\n");

        moverbispo(5);
    break;
    case 'B':
    case 'b':
        printf("***Torre vai andar***\n\n");

        movertorre(5);
    break;
    case 'C':
    case 'c':
        printf("***Rainha vai andar***\n\n");

        moverrainha(8);
    break;
    case 'D':
    case 'd':
        printf("***Cavalo vai andar***\n\n");

    while (i <= 1)
    {
        for (int j = 0; j < 2; j++){
            printf("Cima\n");
        }
        printf("Direita\n");
        i++;
    }
        
    default:
        printf("\n\nEscolha inválida!");
    break;
    }

    return 0;
}