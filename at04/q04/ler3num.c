#include <stdio.h>

int ler3num(int leitor[]);

int main()
{   int i;
    int resultado;
    int vetor3[3];
    resultado = ler3num(vetor3);
    
   printf("A sequencia eh: ");
   
    for(i = 0; i < 3; i++){
        printf("%d -- ", vetor3[i]);
    }


    return 0;
}

int ler3num(int leitor[]){
    int res[3];
    int i;
    
    for(i = 0; i < 3; i++){
        printf("Digite um valor para a sequencia: \n");
        scanf("%d", &leitor[i]);
    }
    
    return res[3];
}