#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;
    char escolha;

    //Está pedindo pra escolher a peça
    printf("###JOGO XADREZ###\n");
    printf("Escolha a peça para andar\n");
    printf("A. Bispo\n");
    printf("B. Torre\n");
    printf("C. Rainha\n");
    printf("##ESCOLHA##\n");
    scanf("%c", &escolha);
    
    switch (escolha)
    {
    //
    case 'A':
    case 'a':
        printf("***Bispo vai andar***\n\n");

        while (i <= 5)
        {
            printf("Cima\n");
            printf("Direita\n");
            i++;
        }
    break;
    case 'B':
    case 'b':
        printf("***Torre vai andar***\n\n");

        do
        {
            printf("Direita\n");
            i++;

        }while (i <= 5);
    break;
    case 'C':
    case 'c':
        printf("***Rainha vai andar***\n\n");

        for (int i = 1; i <= 8; i++){
            printf("Esquerda\n");
        }
    break;
    default:
        printf("\n\nEscolha inválida!");
    break;
    }

    return 0;
}
