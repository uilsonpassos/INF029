#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
  char texto[250];
  char procura;
  int i, cont = 0;

  printf("Digite um texto de ate 250 caracteres: \n");
  scanf("%[^\n]", texto);
       getchar();
  
  printf("Digite a letra a ser procurada: \n");
  scanf("%s", &procura);
       getchar();
  

  for(i = 0; i < 250; i++){
    if( toupper (texto[i]) == toupper (procura)){
        cont = cont + 1;
    }
  }

  printf(" \n");

  if(cont != 0){
    printf("A letra foi encontrada %d vezes", cont);
  }
  else printf("A letra nao foi encontrada ");

  return 0;
}