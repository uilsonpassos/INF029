#include <stdio.h>

typedef struct leitura4{
    
    int n1, n2, n3, n4;
    
}read4;

void digitanum(read4 * n){
    printf("Digite o primeiro numero: \n");
    scanf("%d", &(*n).n1);
    
    printf("Digite o segundo numero: \n");
    scanf("%d", &(*n).n2);
    
    printf("Digite o terceiro numero: \n");
    scanf("%d", &(*n).n3);

    printf("Digite o quarto numero: \n");
    scanf("%d", &(*n).n4);
}

int main()
{
    read4 leitura4;
    digitanum(&leitura4);
    
    printf("%d \n", leitura4.n1);
    printf("%d \n", leitura4.n2);
    printf("%d \n", leitura4.n3);
    printf("%d \n", leitura4.n4);

    return 0;
}