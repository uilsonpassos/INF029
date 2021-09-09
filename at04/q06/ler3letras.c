#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ler3letras(char leitor[]);

int main()
{ 
    char ler3val[4];
    ler3letras(ler3val);
    
        printf("A sequencia eh: %s -- ", ler3val);


    return 0;
}

void ler3letras(char leitor[]){
    

        printf("Digite uma letra para a sequencia: \n");
        fgets(leitor, 4, stdin);
}