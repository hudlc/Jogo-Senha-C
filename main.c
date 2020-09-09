#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "mastermind.h"

int main()
{

    srand(time(NULL));


    cont = 9;
    codigo = malloc(sizeof(char)*15);
    solucao = malloc(sizeof(char)*15);

    printf("**Jogo Senha**\n");

    printf("Regras do jogo:\n");
    printf("Acerte a combinacaoo de 4 cores diferentes\n");
    printf("em no maximo 10 tentativas para vencer!\n");
    printf("As cores possiveis sao:\n");
    printf("R(Red),G(Green),C(Cyan),P(Purple),M(Magenta)\n");
    printf("Ao jogar, insira 4 cores usando sua primeira\n");
    printf("letra (Exmeplo: CPMG)\n\n");

    zeraCodigo(solucao);
    geraSenha(solucao);

    //printf("solucao:%s\n",solucao);

    for(i=0; i<11; i++){
        pegaString();

        if(verificaCodigo(codigo)){
        acertoPreciso = testaAcertoPreciso(codigo,solucao);

        acertoNormal = testaAcertoNormal(codigo ,solucao);

            if(acertoPreciso == 4){
                printf("Ganhou\n\n");
                break;
            }

            else if(cont == 0){
                printf("Perdeu!\n");
                break;
            }

        printf("Acertos precisos:%d\n",acertoPreciso);
        printf("Acertos normais:%d\n",acertoNormal-acertoPreciso);
        }

        else{
            printf("Combinacao invalida!\n");
            cont++;
        }
        printf("Tentativas Restante:%d\n",cont);
        cont--;

    }

    printf("Jogo desenvolvido por Hudson L. Cordeiro\n");
    printf("Como o trabalho 1 de Fundamentos de Programação 1\n");
    printf("Do professor: Andre Schneider de Oliveira\n");

    return 0;
}




