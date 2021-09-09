#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ler3letras(char primeira[], char segunda[], char terceira[]);

int main()
{ 
    char ler1val[20];
    char ler2val[20];
    char ler3val[20];
    ler3letras(ler1val, ler2val, ler3val);
    
        printf("A primeira palavra eh: %s -- \n", ler1val);
        printf("A segunda palavra eh: %s -- \n", ler2val);
        printf("A terceira palavra eh: %s -- \n", ler3val);


    return 0;
}

void ler3letras(char primeira[], char segunda[], char terceira[]){
    

        printf("Digite a primeira palavra: \n");
        fgets(primeira, 20, stdin);
        
        printf("Digite a segunda palavra: \n");
        fgets(segunda, 20, stdin);
        
        printf("Digite a terceira palavra: \n");
        fgets(terceira, 20, stdin);
}