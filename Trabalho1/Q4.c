#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define true 1
#define false 0

typedef  int bool;

bool existe(char palavra[], char frase[]){
    int teste[ strlen(palavra) ];
    int aux;
    bool ok;


    if( strlen(palavra) > strlen(frase) ){
        return false;
    }

    if( strcmp(palavra,frase) ==0 ){
        return true;
    }

    for(int i=0; i <= strlen(frase) - strlen(palavra); i++){
        if(frase[i]==palavra[0]){

            for(int k=0;k<strlen(palavra);k++)
                teste[k]=0;

            aux=i;
            for(int j=0;j<strlen(palavra);j++){
                if(palavra[j]==frase[aux]){
                    teste[j]=1;
                    aux++;
                }
            }

            ok=true;
            for(int m=0;m<strlen(palavra);m++){
                if(teste[m]==0){
                    ok=false;
                }
            }

            if( ok ){
                return true;
            }
        }
    }
    return false;
}


int main() {
  char texto[250];
  char palavra[250];
  int i, cont = 0;

  printf("Digite um texto de ate 250 caracteres: \n");
  scanf("%[^\n]", texto);
       getchar();
  
  printf("Digite a letra a ser procurada: \n");
  scanf("%[^\n]", palavra);
       getchar();
  

    if(existe(palavra,texto)){
        printf("\n\nA palavra existe\n\n");
    }else{
        printf("\n\nA palavra nao existe\n\n");
    }

  return 0;
}

 

