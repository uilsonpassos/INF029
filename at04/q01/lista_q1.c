#include <stdio.h>
int main(void)
{
	
    int numero_a;
    int numero_b;
    
    printf("Digite o numero A: \n");
    scanf("%d", &numero_a);
    printf("Digite o numero B: \n");
    scanf("%d", &numero_b);
    int Operacao = soma( numero_a, numero_b);
    printf("O resultado eh: %d", Operacao);

	return 0;
}
