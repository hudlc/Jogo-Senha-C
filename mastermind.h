
#define vermelho     "\033[0;31m"
#define cyan    "\033[1;36m"
#define verde   "\033[4;32m"
#define azul    "\033[9;34m"
#define preto   "\033[0;30m"
#define marrom   "\033[0;33m"
#define magenta "\033[0;35m"
#define cinza    "\033[0;37m"
#define none    "\033[0m"




int i,acertoPreciso,j,acertoNormal,cont,r,aux;

char *codigo,*solucao;

void pegaString();

int verificaCodigo(char stringCod[]);

void geraSenha(char stringSenha[]);

int testaAcertoPreciso(char string1[], char string2[]);

int testaAcertoNormal(char string1[], char string2[]);

char intEmChar(int inteiro);

void gotoxy(int x, int y);

void zeraCodigo(char string1[]);
