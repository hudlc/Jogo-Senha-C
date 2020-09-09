#include "mastermind.h"



int testaAcertoPreciso(char codigo[], char solucao[]){
    //função que retorna o número de acertos precisos
    //Ou os "Pinos Brancos"
    acertoPreciso = 0;i=0;
    while (i<4){
            if (toupper(codigo[i])==solucao[i]){
                acertoPreciso++;
            }
            i++;
        }
        return acertoPreciso;
}

int testaAcertoNormal(char string1[],char string2[]) {
    //função que retorna o número de acerto normais
    //Ou os "Pinos Pretos"
    i=0;j=0;acertoNormal=0;

    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            if(toupper(codigo[j])==solucao[i]){
                acertoNormal++;
            }
        }
        j=0;
    }

    return acertoNormal;

}


void pegaString(){
    //função que recebe a string
    for(i=0;i<5;i++){
        scanf("%c",&codigo[i]);
    }
    printf("na string:%s\n",codigo);
}

void zeraCodigo(char string1[]){
    for(i=0;i<5;i++){
        codigo [i] = 0;
    }

}

int verificaCodigo(char stringCod[]){
    //Verifica se os caracteres inseridos são válidos
    i=0;
    while(codigo[i] != '\n'){
        if (toupper(codigo[i])!='R'&& toupper(codigo[i])!='G'&& toupper(codigo[i])!='B'
            && toupper(codigo[i])!='C'&& toupper(codigo[i])!='P'&& toupper(codigo[i])!='M'){
                return(0);
            }
        i++;
    }
    return(1);
}

void geraSenha (char stringSenha[]){
    //Gera uma senha aleatória a partir de 4
    //números aleatórios
    i=0;
    while(i<4){
        r = (rand()+i)%6;
        solucao[i] = intEmChar(r);
        if(solucao [i] == solucao [i-1]){
            //Evita 2 cores iguais seguidas
            i--;
        }
        i++;
    }

}

char intEmChar(int inteiro)
{
    //Usada em "geraSenha", recebe um int e retorna um char
    if(inteiro == 0)
        return('R');

    if(inteiro == 1)
        return('G');

    if(inteiro == 2)
        return('B');

    if(inteiro == 3)
        return('C');

    if(inteiro == 4)
        return('P');

    if(inteiro == 5)
        return('M');

}

void mostraRegras()
{
    printf("Regras do jogo:\n");
    printf("Acerte a combinação de 4 cores diferentes\n");
    printf("em no máximo 10 tentativas para vencer!\n");
    printf("As cores possíveis são:\n");
    printf("R(Red),G(Green),C(Cyan),P(Purple),M(Magenta)\n");
    printf("Ao jogar, insira 4 cores usando sua primeira\n");
    printf("letra (Ela precisar ser maiuscula!)\n");
}

void mostraCreditos()
{
    printf("Jogo desenvolvido por Hudson L. Cordeiro\n");
    printf("Como o trabalho 1 de Fundamentos de Programação 1\n");
    printf("Do professor: Andre Schneider de Oliveira\n");

}

